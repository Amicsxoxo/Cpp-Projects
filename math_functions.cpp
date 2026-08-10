#include <iostream>
#include <cmath>

int main(){

  double x = 3.9;
  double y = 4;
  double z;

  // z = std::max(x, y); // Used to return the max value in a comparison
  // z = std::min(x, y); // Used to return the minimum value in a comparison
  // z = pow(2, 3); // Used to raise the first value by the second value
  // z = sqrt(9); //Used to get the square root of a number
  // z = abs(-3); // Used to know how far the number is from 0
  // z = round(x); //Used to round numbers
  // z = ceil(); //Used to round numbers up to highest number
  z = floor(x); //Used to round numbers down

  std::cout << z;

  return 0;
}