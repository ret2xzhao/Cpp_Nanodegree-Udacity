/*
Inheritance
In this exercise you will practice building an inheritance hierarchy.

Instructions
1.Define a class Animal.
2.Define 3 member variables: color, name, age.
3.Define a derived class Snake that inherits from the base class Animal.
4.Create a member variable length for the Snake class.
5.Create a derived class Cat that inherits from the base class Animal.
6.Create a member variable height for the Cat class.
7.Create MakeSound() member functions for each of the derived classes.
8.In the main() function instantiate Snake and Cat objects. Initialize both their unique and derived attributes.
Program them to make a sound.
*/

#include <iostream>
#include <string>
using std::cout;
using std::string;

// Define base class Animal
class Animal {
public:
    string color;
    string name;
    int age;
};

// Declare derived class Snake
class Snake : public Animal {
private:
  float length;
public:
  void Print(){
    cout<<"Snake:\n";
    cout<<" color="<<color<<" name="<<name<<" age="<<age<<" length="<<length;
    cout<<"\n";
  }
  void MakeSound() const {
    cout<<"Hiss!Hiss!Hiss!\n";
  }
  void Length(float l){length = l;}
};
// Declare derived class Cat
class Cat : public Animal {
private:
  float height;
public:
  void Print(){
    cout<<"Cat:\n";
    cout<<" color="<<color<<" name="<<name<<" age="<<age<<" height="<<height;
    cout<<"\n";
  }
  void MakeSound() const {
    cout<<"Meow!Meow!Meow!\n";
  }
  void Height(float h){height = h;}
};

// Test in main()
int main(){
  Snake snake;
  snake.color = "Red";
  snake.name = "S";
  snake.age = 3;
  snake.Length(10.8);
  snake.Print();
  Cat cat;
  cat.color = "White";
  cat.name = "C";
  cat.age = 8;
  cat.Height(20);
  cat.Print();
  snake.MakeSound();
  cat.MakeSound();
}