#include <iostream>

//cout is used to display information
//cin is used to collect information from the user

int main(){

  std::string name;
  int age;

  std::cout << "What is your age? ";
  std::cin >> age;

  std::cout << "What is your name? ";
  std::getline(std::cin >> std::ws, name);//The std::ws eliminates the whitespaces before the input field 
  //getline function is used to get everthing on the line including spaces

  std::cout << "Hello " << name << " you are " << age << " years old";

  return 0;
}