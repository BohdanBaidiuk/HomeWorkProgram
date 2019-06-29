#include <iostream>
#include <limits>

int main() {

  long long num;
  long max = std::numeric_limits<long>::max();
  long min = std::numeric_limits<long>::min();
  std::cout << "Program for reverse numbers\n";
  std::cout << "Enter number from "<< min <<" to "<< max <<"\n";
  std::cin >> num;
  if (num >= min && num <= max) {
	    long rev = 0;
	    while (num != 0){
	    long count;
	    count = num % 10;
	    rev = rev * 10 + count;
	    num = num / 10;
	    }
	    std::cout << "Reverse = " << rev << "\n";
  }
  else {
    std::cout << "number should beat minimal = " << min << " and maximal = " << max << "\n";
  }
  return 0;
}
