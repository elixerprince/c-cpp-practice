#include <iostream>
#include <string>
#include <vector>

//Version 1
struct Person {
    std::string name;
    int age;
    float height;
  };

//Version 2
struct {
    std::string name, subject, school;
    float height;
  } Student, Teacher;

int main() {
  int myInt = 1;
  float myFloat = 3.14;
  double myDouble = 3.14159;
  char myChar = 'A';
  bool myBool = true;
  std::string myString = "Daniel Leith";
  char myArray[] = {'A', 'B', 'C', 'D', 'E'};
  std::vector<std::string> myVector = {"one", "two", "three"};

  std::cout << "This is my integer: " << myInt << '\n';
  std::cout << "This is my float: " << myFloat << '\n';
  std::cout << "This is my double: " << myDouble << '\n';
  std::cout << "This is my character: " << myChar << '\n';
  std::cout << "This is my boolean: " << myBool << '\n';
  std::cout << "This is my string: " << myString << '\n';
  std::cout << "This is the third entry in my array: " << myArray[2] << '\n';
  std::cout << "This is the second entry in my vector: " << myVector.at(1) << '\n';

  Person micoStudent1;

  micoStudent1.name = "Daniel Leith";
  micoStudent1.age = 21;
  micoStudent1.height = 5.75;

  std::cout << "\nThis is the name of the student: " << micoStudent1.name << '\n';
  std::cout << "This is the age of the student: " << micoStudent1.age << '\n';
  std::cout << "This is the height of the student: " << micoStudent1.height;

  return 0;
}