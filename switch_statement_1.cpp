#include <iostream>

int main(){

  char grade;
  std::cout << "What is your grade: ";
  std::cin >> grade;

  switch (grade)
  {
  case 'A':
    std::cout << "You did Great!";
    break;
  case 'B':
    std::cout << "You did Good!";
    break;
  case 'C':
    std::cout << "You did Okay";
    break;
  case 'D':
    std::cout << "You did not do Good";
    break;
  case 'F':
    std::cout << "You Failed";
    break;
  default:
    std::cout << "Pick a grade from (A - F)";
    break;
  }

  return 0;
}