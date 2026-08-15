#include <iostream>

int main(){

  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  //It is used to get all the strings in the user input

  // if (name.length() > 12){ //name.length is used to count the number of characters in a string
  //   std::cout << "Your name can't be more than 12 characters";
  // }
  // else{
  //   std::cout << "Welcome " << name;
  // }


  // if(name.empty()){ //name.empty checks if the string is empty or not and returns a boolean
  //   std::cout << "You didn't enter your name";
  // }
  // else{
  //   std::cout << "Welcome " << name;
  // }

  // name.clear(); // Used to clear the contents of a string
  // std::cout << "Welcome " << name;

  // name.append("@gmail.com"); //Used to append something to a string
  // std::cout << "Your username is now " << name;

  // std::cout << name.at(1); // Used to locate a character at a particular location of the string

  // name.insert(0, "@");//Used to replace a character in a location in a string

  // std::cout << name;

  // std::cout << name.find(' '); // finding a part of a string and returning it's index

  name.erase(0, 3);

  std::cout << name;

  return 0;
}