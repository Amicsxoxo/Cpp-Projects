#include <iostream>
#include <vector>

typedef std::vector <std::pair <std::string, int > > pairlist_t;
//Used give a new identifier to an exising datatype, a naming convention is using underscore t at the end
//it helps with code readability and typos

// typedef std::string text_t;
// typedef int number_t;

using number_t = int;
using text_t = std::string;
//the using keyword is better

int main(){

  //typedef is a reserved  keyword used to create an additional name
  pairlist_t pairlist;
  text_t firstName = "Chima";
  number_t age = 19;

  std::cout << firstName << '\n';
  std::cout << age << '\n';

  return 0;
}