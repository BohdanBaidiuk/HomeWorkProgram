#include <iostream>

int main() {

	uint32_t number;
	uint32_t numMax = 0b1111'1111'1111'1111'1111'1111'1111'1111;
	uint32_t numMin = 0b0000'0000'0000'0000'0000'0000'0000'0001;
	uint32_t bitOne = numMin;
	unsigned short bit;
	std::cout << "Enter the number = ";
	std::cin >> number;
	if (number>= numMin && number<= numMax) {
		short bitMax = 32;
		short bitMin = 1;
		std::cout << "Enter the bit = ";

		std::cin >> bit;
		
		if (bit >= bitMin && bit <= bitMax) {
			bitOne <<= (bit - 1);
			if ((number & bitOne) == bitOne) {
				std::cout << "yes\n";
			}
			else {
				std::cout << "no\n";
			}
		}
		else {
			std::cout << "Eror";
		}
	}
	else {
		std::cout << "Wery long number";
	}
	return 0;
}
