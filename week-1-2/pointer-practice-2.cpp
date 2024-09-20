#include <iostream>

int main() {
  int myInt = 1;
  int* myPointer = &myInt;

  std::cout << "This is my integer: " << myInt << std::endl;
  std::cout << "This is my pointer: " << myPointer << std::endl;
  std::cout << "This is my memory address: " << &myInt << std::endl;
  std::cout << "This is the value at my memory address: " << *myPointer << std::endl; // Pointer dereference

  return 0;
}