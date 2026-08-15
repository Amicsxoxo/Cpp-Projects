#include <iostream>

int main(){

  int number;

  do{

    std::cout << "Enter a positive number: ";
    std::cin >> number;
  } while (number < 0);
  // The do while loop runs the code first and then transitions into a while loop

  std::cout << "The number is " << number;

  return 0;
}