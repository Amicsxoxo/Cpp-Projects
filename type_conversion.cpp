#include <iostream>

int main(){
  //type conversion is converting a value from one data type to another

  double x = (int) 3.14;
  //We converted the number into an integer then stored it in the double, that means it has been truncated before being stored as a double
  // Explicit you precede the value with new data type i.e (int) 3.14159

  int correct = 8;
  int questions = 10;
  double percent = correct / (double)questions * 100;

  std::cout << percent << '%';
  return 0;
}