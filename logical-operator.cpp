#include <iostream>

int main() {
  int a = 277;
  int b = 652;

  if ((a >= 200 and a <= 250) or b == 500) {
    std::cout
        << "a grather than equal 200 and a less than equal 250, or b equal 500"
        << std::endl;
  }

  if (!(a >= 200)) {
    std::cout << "a not greather than equal 200" << std::endl;
  }

  return 0;
}