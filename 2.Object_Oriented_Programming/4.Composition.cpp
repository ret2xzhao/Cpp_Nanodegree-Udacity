/*
Instructions
In this exercise, you will start with a LineSegment class and create a Circle class.

Note that you will compose Circle from LineSegment, instead of inheriting Circle from LineSegment. Specifically, the
length attribute from LineSegment will become the circle's radius.

1.Create a class LineSegment.
2.Declare an attribute length in class LineSegment.
3.Define pi (3.14159) with a macro.
4.Create a class Circle, composed of a LineSegment that represent's the circle's radius. Use this radius to calculate
the area of the circle(area of a circle = πr^2).
5.Verify the behavior of Circle in main().
*/

#include <iostream>
#include <cmath>
#include <assert.h>
//#define PI 3.14159;
using std::cout;

// Define LineSegment Class
class LineSegment{
    // Define protected attribute length
  protected:
    float length;
  public:
    LineSegment(float l): length(l){}
    void Length(float l){
      if(l<=0){
        cout<<"Length: Error: Invalid Input.\n";
      }
      else{length = l;}
    }
    float Length(){return length;}
};

// Define Circle subclass
class Circle{
    // Define public Area()
    public:
      Circle(LineSegment &line): line_(line){}
      float Area() const {
        return M_PI * pow(line_.Length(), 2);
      }
    private:
      LineSegment &line_;
};

// Test in main()
int main() 
{
    LineSegment radius {3};
    Circle circle(radius);
    assert(int(circle.Area()) == 28);
}