/*
Exercise: Pyramid Class
1.Create a class: Pyramid.
2.Create 3 attributes: length, width, and height.
3.Create a constructor to initialize all the attributes.
4.Create accessor and mutator functions for all attributes.
5.Think about the appropriate invariants and enforce them by throwing exceptions.
6.Create a member function to calculate the volume of the pyramid.
7.Optional: create a member function to calculate the surface area of the pyramid.
The volume of a pyramid is length * width * height / 3.
*/

#include <cassert>
#include <stdexcept>
#include <math.h>
#include <iostream>
using std::cout;

// TODO: Define class Pyramid
  class Pyramid{
// public class members
    public:
// constructor
      Pyramid(int l, int w, int h): length_(l), width_(w), height_(h){
        Length(l);
        Width(w);
        Height(h);
      }

// accessors
      int Length() const {return length_;}
      int Width() const {return width_;}
      int Height() const {return height_;}

// mutators
      void Length(int length){
          if(length<=0){
              throw std::invalid_argument("Error: Invalid input");
          }
          else{
              length_ = length;
          }
      }
      
      void Width(int width){
          if(width<=0){
              throw std::invalid_argument("Error: Invalid input");
          }
          else{
              width_ = width;
          }
      }
      
      void Height(int height){
          if(height<=0){
              throw std::invalid_argument("Error: Invalid input");
          }
          else{
              height_ = height;
          }
      }

// public Volume() function
      float Volume() const{
        return Length() * Width() * Height()/3;
      }

// public SurfaceArea() function
      float SurfaceArea() const{
          float s1 = Width()*sqrt((Length()/2)*(Length()/2)+Height()*Height());
          float s2 = Length()*sqrt((Width()/2)*(Width()/2)+Height()*Height());
          float sum = Width()*Length() + s1 + s2;
          return sum;
      }

// private class members
    private:
      int length_;
      int width_;
      int height_;
};

// Test
int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.Length() == 4);
  assert(pyramid.Width() == 5);
  assert(pyramid.Height() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);

  Pyramid pyramid2(2, 2, 6);
  cout<<pyramid2.SurfaceArea()<<"\n";
}