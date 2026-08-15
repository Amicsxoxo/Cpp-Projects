#include <iostream>
#include <ctime>

int main(){

  srand(time(0));

  int randNum = (rand() % 5) + 1;

  switch (randNum)
    {case 1:
      std::cout << "You won a Bumper Sticker!";
      break;
    case 2:
      std::cout << "You won a T-shirt!";
      break;
    case 3:
      std::cout << "You won a Free lunch!";
      break;
    case 4:
      std::cout << "You won a Gift card!";
      break;
    case 5:
      std::cout << "You won a Concert ticket!";
      break;
  }

  return 0;
}