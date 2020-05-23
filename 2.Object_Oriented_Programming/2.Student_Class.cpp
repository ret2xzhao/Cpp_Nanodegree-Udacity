/*
Exercise: Student Class
Your goal in this lab is to write a class called Student that will hold data about a
particular student. Your class simply needs to store the data and provide accessors and
mutators.

Directions
1.Add 3 private member variables to the class:
Name
Grade (e.g. 9th grade)
Grade Point Average
2.Write a public constructor function to set the private attributes.
3.Create public member functions to set each of the member variables. Before setting the values verify that:
Grade is from 0 (kindergarten) to 12
GPA is from 0.0 to 4.0
The function must either throw an exception if any of the invariants are violated
4.Within the main() (outside of the class), declare an object of type Student and test
out each of the member function calls.
*/

#include <iostream>
#include <cassert>
#include <stdexcept>
#include <string>
using std::string;
using std::cout;

// TODO: Define "Student" class
class Student {
 public:
  // constructor
    Student(string name, int grade, float gpa): name_(name), grade_(grade), gpa_(gpa){
        Name(name);
        Grade(grade);
        GPA(gpa);
    }
  // accessors
    string Name() const {return name_;}
    int Grade() const {return grade_;}
    float GPA() const {return gpa_;}
  // mutators
    void Name(string name){
        if(name!=""){
            name_ = name;
        }
        else{
            cout<<"Name: Error: Invalid input\n";
            //throw std::invalid_argument("Name: Error: Invalid input");
        }
    }

    void Grade(int grade){
        if(grade>=0 && grade<=12){
            grade_ = grade;
        }
        else{
            cout<<"Grade: Error: Invalid input\n";
            //throw std::invalid_argument("Grade: Error: Invalid input");
        }
    }

    void GPA(float gpa){
        if(gpa>=0.0 && gpa<=4.0){
            gpa_ = gpa;
        }
        else{
            cout<<"GPA: Error: Invalid input\n";
            //throw std::invalid_argument("GPA: Error: Invalid input");
        }
    }
 private:
  // name
  // grade
  // GPA
    string name_;
    int grade_;
    float gpa_;
};

// TODO: Test
int main() {
    Student s1("Xin Zhao", 12, 4.0);
    Student invalid("", 12, 4.0);
    Student invalid2("Hailey", 18, 4.0);
    Student invalid3("Mila", 0, 5.0);
}