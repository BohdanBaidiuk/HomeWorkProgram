#include <iostream>

void main() {
  unsigned short max = 40;
  unsigned short min = 3;
  std::cout << "Please enter number from "<< min <<" to "<< max <<"\n";
  unsigned short star;
  std::cin >> star;
  if (star >= min && star <= max) {
    int  inHalf = star / 2;
    int first = inHalf;
    unsigned  second = inHalf;
    while (star > 0) {
      for (int i = 0; i <= first; ++i) {
	      std::cout << ' ';
	    }
	    for (int i = first; i <= second; ++i) {
	      std::cout << '*';
	    }
	    for (int i = second; i <= star; ++i) {
	      std::cout << ' ';
	    }
	    first--;
	    second++;
	    star--;
	    std::cout << '\n';
    }
  }
  else {
    std::cout << "Not range";
  }
}
