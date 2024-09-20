#include <iostream>

int main() {
  const int ARRAY_SIZE = 5;
  int grades[ARRAY_SIZE] = {89, 84, 91, 75, 32};

  std::cout << "\nGrades using normal for loop: " << std::endl;

  for (int i = 0; i < ARRAY_SIZE; i++)
    std::cout << "Grades[" << i << "] = " << grades[i] << "\n" << std::endl;

  std::cout << "\nGrades using range-based for loop: " << std::endl;

  for (int i : grades)
    std::cout << "Grades[" << i << "] = " << i << "\n" << std::endl;

  return 0;
}