#include <iostream>

int main() {
  int a, b;
  a = 20;
  b = 13;
  b = 2;

  int hasil;

  hasil = a + b;
  std::cout << a << " + " << b << " = " << hasil << std::endl;

  a = 11;

  hasil = a / b;
  std::cout << a << " / " << b << " = " << hasil << std::endl;

  hasil = a - b;
  std::cout << a << " - " << b << " = " << hasil << std::endl;

  a = 29;
  b = 2;

  hasil = a * b;
  std::cout << a << " x " << b << " = " << hasil << std::endl;

  hasil = (a + b) % 2;
  std::cout << a << " % " << b << " = " << hasil << std::endl;

  return 0;
}