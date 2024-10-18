#include <iostream>

int main() {
  for (int i = 0; i < 10; i++) {
    std::cout << "current loop: " << i << std::endl;
  }

  int b = 32;
  do {
    b--;

    std::cout << "b: " << b << std::endl;
  } while (b > 10);

  return 0;
}