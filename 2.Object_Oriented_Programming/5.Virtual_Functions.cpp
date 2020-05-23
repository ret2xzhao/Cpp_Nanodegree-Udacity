/*
Instructions
1.Create base class called Shape.
2.Define pure virtual functions (= 0) for the base class.
3.Write the derived classes.
  Inherit from class Shape.
  Override the pure virtual functions from the base class.
4.Test in main()
*/

// Example solution for Shape inheritance
#include <assert.h>
#include <cmath>
// TODO: Define pi

// TODO: Define the abstract class Shape
class Shape{
public:
  // TODO: Define public virtual functions Area() and Perimeter()
  // TODO: Append the declarations with = 0 to specify pure virtual functions
    virtual float Area() const = 0;
    virtual float Perimeter() const = 0;
};

// TODO: Define Rectangle to inherit publicly from Shape
class Rectangle : public Shape{
public:
  // TODO: Declare public constructor
    Rectangle(float w, float h): width_(w), height_(h){}
  // TODO: Override virtual base class functions Area() and Perimeter()
    float Area() const override {return width_ * height_;}
    float Perimeter() const override {return (width_ + height_) * 2;}
  // TODO: Declare private attributes width_ and height_
private:
    float width_;
    float height_;
};

// TODO: Define Circle to inherit from Shape
class Circle : public Shape{
public:
  // TODO: Declare public constructor
    Circle(float r): radius_(r){}
  // TODO: Override virtual base class functions Area() and Perimeter()
    float Area() const override {return M_PI * pow(radius_, 2);}
    float Perimeter() const override {return 2 * M_PI * radius_;}
  // TODO: Declare private member variable radius_
private:
    float radius_;
};
// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);

  // Test rectangle
  Rectangle rectangle(10, 6);
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}