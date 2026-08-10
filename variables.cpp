#include <iostream>

int main() {

  // int is for integers
  int age = 19;
  int year = 2026;
  int days = 7.5;
  //When you store a number with decimal place in an int the decimal places are truncated, that means they are cut off

  //double (for numbers with decimal places)
  double price = 10.99;
  double gpa = 4.68;
  double temperature = 27.5;
  
  //char stores a single character
  char grade = 'A';
  char intial = 'C';

  //boolean a variable that has two states (True or False)
  bool student = true;
  bool power = false;
  bool forSale = true;

  //strings is an object that represents a sequence of texts
  std::string name = "Chima";
  std::string day = "Friday";
  std::string food = "Eba";
  std::string address = "Lasu Epe";

  std::cout << "Hello " << name << '\n';
  std::cout << "You are " << age << " years old";

  return 0;
}