#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Version 1
struct Person {
    string name;
    int age;
    float height;
  };

//Version 2
struct {
    string name, subject, school;
    float height;
  } Student, Teacher;

int main() {
  int myInt = 1;
  float myFloat = 3.14;
  double myDouble = 3.14159;
  char myChar = 'A';
  bool myBool = true;
  string myString = "Daniel Leith";
  char myArray[] = {'A', 'B', 'C', 'D', 'E'};
  vector <string> myVector = {"one", "two", "three"};

  cout << "This is my integer: " << myInt << endl;
  cout << "This is my float: " << myFloat << endl;
  cout << "This is my double: " << myDouble << endl;
  cout << "This is my character: " << myChar << endl;
  cout << "This is my boolean: " << myBool << endl;
  cout << "This is my string: " << myString << endl;
  cout << "This is the third entry in my array: " << myArray[2] << endl;
  cout << "This is the second entry in my vector: " << myVector[1] << endl;

  Person micoStudent1;

  micoStudent1.name = "Daniel Leith";
  micoStudent1.age = 21;
  micoStudent1.height = 5.75;

  cout << "\nThis is the name of the student: " << micoStudent1.name << endl;
  cout << "This is the age of the student: " << micoStudent1.age << endl;
  cout << "This is the height of the student: " << micoStudent1.height;

  return 0;
}