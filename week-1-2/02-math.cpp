#include <iostream>
#include <string>
#include <cmath>

int main() {
  std::string name;
  double num1, num2, result;

  std::cout << "What is your full name?\n";
  getline(std::cin, name);
  std::cout << "\nEnter two numbers to be multiplied!\n";
  std::cout << "What is your first number?\n";
  std::cin >> num1;
  std::cout << "What is your second number?\n";
  std::cin >> num2;

  result = num1 * num2;
  
  std::cout << "\nHello " << name << ".\n"; 
  std::cout << "\nThe result of multiplying the numbers you entered is " << result << '\n';

  return 0;
} 