#include <iostream>

int main()
{
	unsigned  number;
	unsigned min = 3, max = 99;
	std::cout << "Input number range from "<< min <<" to "<< max <<" to findt best divider = \n";

	std::cin >> number;
	unsigned numOne = 0;
	unsigned numTwo = 0;
	if (number >= min && number <= max) {
		for (int i = number; i > 0; i--) {
			if (number % i == 0) {
				if (i >= 10) {
					unsigned n1 = i % 10;
					unsigned n2 = (i % 100 - n1) / 10;
					unsigned n3 = n1 + n2;
					if (n3 > numOne) {
						numOne = n3;
					}
				}
				else {
					if (i > numTwo) {
						numTwo = i;
					}
				}
			}
		}
		if (numOne > numTwo) {
			std::cout << "best divider = " << numOne;
		}
		else {
			std::cout << "best divider = " << numTwo;
		}
	}
	else {
		std::cout << "Not range";
	}
	return 0;
}
