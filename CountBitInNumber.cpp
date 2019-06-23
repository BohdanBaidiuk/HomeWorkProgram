#include <iostream>

int main() {

	unsigned  number,bit;
	unsigned maxBit = 255;
	unsigned minBit = 1;
	std::cout << "Inpute number from "<< minBit<<" to "<< maxBit <<"\n";
	std::cin >> bit;
	number = bit;
	if (bit >= minBit && bit <= maxBit) {
		int count = 0;
		for (; bit != 0;) {
			count += bit & 1;
			bit >>= 1;
		}
		std::cout << "In number = " << number << " is a bit = " << count;
	}
	else {
		std::cout << "Not range";
	}
	return 0;
}

