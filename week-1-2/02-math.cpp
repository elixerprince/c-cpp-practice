#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::string name;
  double num1, num2, result;

  std::cout << "What is your full name?" << std::endl;
  getline(std::cin, name);
  std::cout << "\nEnter two numbers to be multiplied! " << std::endl;
  std::cout << "What is your first number?" << std::endl;
  std::cin >> num1;
  std::cout << "What is your second number?" << std::endl;
  std::cin >> num2;

  result = num1 * num2;
  
  std::cout << "\nHello " << name << "." << std::endl; 
  std::cout << "\nThe result of multiplying the numbers you entered is " << result << std::endl;

  return 0;
} 