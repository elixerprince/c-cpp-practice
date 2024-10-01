#include <iostream>
#include <string>

class Supplier {
    std::string name;
    std::string productName;
    double unitCost;
    int quantity;
    double totalCost;

  public:
    void setName(std::string name) {
      this->name = name;
    }

    void setProductName(std::string productName) {
      this->productName = productName;
    }

    void setUnitCost(double unitCost) {
      this->unitCost = unitCost;
    }

    void setQuantity(int quantity) {
      this->quantity = quantity;
    }

    void calculateTotalCost(double unitCost, int quantity) {
      totalCost = unitCost * quantity;
    }

    void getInformation() {
      std::cout << "Name: " << name << '\n';
      std::cout << "Product Name: " << productName << '\n';
      std::cout << "Unit Cost: $" << unitCost << '\n';
      std::cout << "Quantity: " << quantity << '\n';
      std::cout << "Total Cost: $" << totalCost << '\n';
    }
};

int main() {
  Supplier supplier1;

  std::string name, productName;
  double unitCost;
  int quantity;

  std::cout << "Enter name: ";
  getline(std::cin, name);
  supplier1.setName(name);
  std::cout << "Enter product name: ";
  getline(std::cin, productName);
  supplier1.setProductName(productName);
  std::cout << "Enter unit cost: ";
  std::cin >> unitCost;
  supplier1.setUnitCost(unitCost);
  std::cout << "Enter quantity: ";
  std::cin >> quantity;
  supplier1.setQuantity(quantity);
  supplier1.calculateTotalCost(unitCost, quantity);

  supplier1.getInformation();

  return 0;
}