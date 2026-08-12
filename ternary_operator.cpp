#include <iostream>

int main(){
  //It is used to replace the if else statements 
  //condition ? expression1: expression2

  // int grade = 50;
  // grade >= 50 ? std::cout << "You pass" : std::cout << "You falil";

  // int num = 9;
  // num % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

  bool hungry = true;

  // hungry ? std::cout << "I'm Hungry !!" : std::cout << "I'm not hungry";
  std::cout << (hungry ? "I'm hungry !!" : "I'm not hungry");

  return 0;
}