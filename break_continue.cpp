#include <iostream>

int main(){
  //break is used to break out of a loop 
  //continue is used to skip current iteration

  for (int i = 1; i <= 20; i++){
    if(i == 13){
      continue;
    }
    std::cout << i << '\n';
  }

    return 0;
}