#include <iostream>

int main() {

  // The const keyword is used to specify that a variable is constant
  // It tells the compiler to prevent anything from editing it
  // It's read only

  const double PI = 3.14159;
  const int SPEED_LIGHT = 299792458;
  const int WIDTH = 1920;
  const int HEIGHT = 1080;

  const std::string NAME = "Chima";

  double radius = 10;
  double circumference = 2 * PI * radius;

  std::cout << NAME;

  return 0;
}