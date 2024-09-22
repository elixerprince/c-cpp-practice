#include <iostream>

int main() {
  const int ARRAY_SIZE = 5;
  int grades[ARRAY_SIZE] = {89, 84, 91, 75, 32};

  std::cout << "\nGRADES USING NORMAL FOR LOOP:\n";

  for (int i = 0; i < ARRAY_SIZE; i++)
    std::cout << "Grades[" << i << "] = " << grades[i] << "\n\n";

  std::cout << "\nGRADES USING RANGE-BASED FOR LOOP:\n";

  for (int i : grades)
    std::cout << "Grades[" << i << "] = " << i << "\n\n";

  return 0;
}