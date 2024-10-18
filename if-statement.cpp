#include <iostream>
#include <string>

int main() {
  std::string name = "Erlangga";

  if (name == "erlangga") {
    std::cout << "Hello " << name << std::endl;
  } else if (name == "anonim") {
    std::cout << "Name is privacy" << std::endl;
  } else {
    std::cout << "Name invalid" << std::endl;
  }

  return 0;
}