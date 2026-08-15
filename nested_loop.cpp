#include <iostream>

int main(){

  int rows;
  int columns;
  char symbols;

  std::cout << "How many rows?: ";
  std::cin >> rows;

  std::cout << "How many columns?: ";
  std::cin >> columns;

  std::cout << "Enter a symbol to use: ";
  std::cin >> symbols;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 0; j <= columns; j++)
    {
      std::cout << symbols ;
    }
    std::cout << '\n';
  }

  return 0;
}