// Bug fix activity from Mico Data Structures year 3 semester 1 week 2
#include <iostream>
#include <iomanip> // Allows use of setw

int main() {
  const int ARRAY_SIZE = 5;
  int Grades[ARRAY_SIZE] = {89, 84, 91, 75, 32};

  // Display the array elements as an element : value pair
  std::cout << "Index" << std::setw(12) << "Element" << "\n";
  for(int i = 0; i < 5; i++)
    std::cout << std::setw(3) << i << std::setw(11) << Grades[i] << "\n";

  return 0;
}
