#include <iostream>
#include <string>

class GovernmentAgency {
  std::string employeeName;
  std::string position;
  double salary;
  double salaryIncrease = 0.2;
  bool isGovernmentEmployee;

  public:
    GovernmentAgency() {
      std::cout << "Enter employee name: ";
      getline(std::cin, employeeName);
      std::cout << "Enter position: ";
      getline(std::cin, position);
      std::cout << "Enter salary: ";
      std::cin >> salary;
      std::cout << "Enter status (1 for government, 0 for private): ";
      std::cin >> isGovernmentEmployee;
    }

    void printSalary() {
      std::cout << "Employee name: " << employeeName << std::endl;
      std::cout << "Position: " << position << std::endl;
      std::cout << "Previous salary: " << salary << std::endl;
      if (isGovernmentEmployee) {
        salary += salary * salaryIncrease;
        std::cout << "Increased salary: " << salary << std::endl;
      }
    };
};

int main() {
  GovernmentAgency employee;
  employee.printSalary();

  return 0;
}