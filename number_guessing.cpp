#include <iostream>

int main(){

  int num;
  int guess;
  int tries = 0;

  srand(time(NULL));
  num = (rand() % 100) + 1;

  std::cout << "!!********************** NUMBER GUESSING GAME **********************!!\n";

  do{
    std::cout << "Enter a guess from (1 - 100): ";
    std::cin >> guess;
    tries++;

    if(guess > num){
      std::cout << "Guess is too high\n";
    }
    else if(guess < num){
      std::cout << "Guess is too low\n";
    }
    else{
      std::cout << "YOUR'E CORRECT!!!" << "\n Total of " << tries << " tries";
    }
  } while (guess != num);

  std::cout << "\n!!!******************************************************************!!!";

  return 0;
}