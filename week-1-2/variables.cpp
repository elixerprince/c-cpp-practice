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
  std::vector <std::string> myVector = {"one", "two", "three"};

  std::cout << "This is my integer: " << myInt << std::endl;
  std::cout << "This is my float: " << myFloat << std::endl;
  std::cout << "This is my double: " << myDouble << std::endl;
  std::cout << "This is my character: " << myChar << std::endl;
  std::cout << "This is my boolean: " << myBool << std::endl;
  std::cout << "This is my string: " << myString << std::endl;
  std::cout << "This is the third entry in my array: " << myArray[2] << std::endl;
  std::cout << "This is the second entry in my vector: " << myVector[1] << std::endl;

  Person micoStudent1;

  micoStudent1.name = "Daniel Leith";
  micoStudent1.age = 21;
  micoStudent1.height = 5.75;

  std::cout << "\nThis is the name of the student: " << micoStudent1.name << std::endl;
  std::cout << "This is the age of the student: " << micoStudent1.age << std::endl;
  std::cout << "This is the height of the student: " << micoStudent1.height;

  return 0;
}