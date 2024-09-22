#include <iostream>

class Car {
  protected:
    int speed = 0; // Encapsulation - Prevents direct access to variables
    int gear = 0;
    std::string color = "undefined";

  public:
    Car() {
      // Constructors have no return value
      std::cout << "Car object created\n"; // Avoid using std::endl as it flushes the buffer and greatly slows down the program
    }

    void getCarInfo() {
      std::cout << "Speed: " << speed << '\n';
      std::cout << "Gear: " << gear << '\n';
      std::cout << "Color: " << color << '\n';
    }

    void setCarColor(std::string c) {
      color = c;
    }

    void setCarSpeed(int s) {
      speed = s;
    }

    void setCarGear(int g) {
      gear = g;
    }
};

class Tesla : public Car {
  protected: // Needs same access level as parent class to work
    int speed = 150;
    int gear = 6;
    std::string color = "Black";

  public:
    Tesla() {
      std::cout << "Tesla object created\n";
    }

    Tesla(int s, int g, std::string c) {
      speed = s;
      gear = g;
      color = c;
    }
    
    void getCarInfo() {
      std::cout << "Tesla Speed: " << speed << '\n';
      std::cout << "Tesla Gear: " << gear << '\n';
      std::cout << "Tesla Color: " << color << '\n';
    }
};

int main() {
  Car myCar;
  myCar.setCarColor("Red");
  myCar.setCarSpeed(100);
  myCar.setCarGear(5);
  myCar.getCarInfo();

  Tesla myTesla;
  myTesla.getCarInfo();

  return 0;
}