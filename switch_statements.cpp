#include <iostream>

//Switch operators are used inplace of if and else statements, it is more efficient and easy to read

int main(){

  int month;
  std::cout << "Enter the month (1-12): ";
  std::cin >> month;

  switch (month){
    case 1:
      std::cout << "This is January";
      break;
    case 2:
      std::cout << "This is Feburary";
      break;
    case 3:
      std::cout << "This is March";
      break;
    case 4:
      std::cout << "This is April";
      break;
    case 5:
      std::cout << "This is May";
      break;
    case 6:
      std::cout << "This is June";
      break;
    case 7:
      std::cout << "This is July";
      break;
    case 8:
      std::cout << "This is August";
      break;
    case 9:
      std::cout << "This is September";
      break;
    case 10:
      std::cout << "This is October";
      break;
    case 11:
      std::cout << "This is November";
      break;
    case 12:
      std::cout << "This is December";
      break;
    default:
      std::cout << "Input numbers (1-12)!";
      //Default is used incase none of the conditions is met
    }

  return 0;
}