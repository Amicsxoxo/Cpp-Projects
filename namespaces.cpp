#include <iostream>

namespace first{
  int x = 0;
}

namespace second{
  int x = 1;
}

int main() {
  /*
  Namespace help prevent name conflicts in larger files, it allows for identical named entities as long as the namespaces are different
  */
  using namespace first;
  //It's used to declare your'e using the namespace being declared

  using std::string;
  // it can be used inplace of std::string everytime

  std::cout << first::x;
  //The double column is used for scope resolution, it can be used to access the namespace first

  string name = "Chima";

  return 0;
}