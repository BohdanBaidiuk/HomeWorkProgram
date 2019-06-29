#include <iostream>

int main() {

  unsigned  number;
  unsigned bit;
  std::cout << "Inpute number to find out how many bits in the number\n";
  std::cin >> bit;
  number = bit;
  unsigned count = 0;
  while (bit != 0) {
    count += bit & 1;
    bit >>= 1;
  }
  std::cout << "In number = " << number << " is a bit = " << count;
  return 0;
}
