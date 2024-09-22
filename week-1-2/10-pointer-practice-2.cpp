#include <iostream>

int main() {
  int myInt = 1;
  int* myPointer = &myInt;

  std::cout << "This is my integer: " << myInt << '\n';
  std::cout << "This is my pointer: " << myPointer << '\n';
  std::cout << "This is my memory address: " << &myInt << '\n';
  std::cout << "This is the value at my memory address: " << *myPointer << '\n'; // Pointer dereference

  return 0;
}