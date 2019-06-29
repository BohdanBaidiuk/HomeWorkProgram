#include <iostream>

int main() {
  const unsigned short MAX = 40;
  const unsigned short MIN = 3;
  std::cout << "Program for drawing Tree \n"
  "please enter number from "<< MIN <<" to "<< MAX <<"\n";
  unsigned short count;
  std::cin >> count;
  if (count >= MIN && count <= MAX) {
    unsigned short inHalf = count / 2;
    short start = inHalf;
    unsigned short end = inHalf;
    while (start >= 0) {
      for (int i = 0; i < start; ++i) {
        std::cout << ' ';
      }
      for (int i = start; i <= end; ++i) {
        std::cout << '*';
      }
      for (int i = end; i < count; ++i) {
        std::cout << ' ';
      }
      --start;
      ++end;
      std::cout << '\n';
    }
  }
  else {
    std::cout << "Range from "<< min <<" to "<< MAX;
  }
	return 0;
}
