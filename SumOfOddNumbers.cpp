#include <iostream>

int main() {
	short number;
	unsigned short minSize = 1;
	unsigned short maxSize = 50;
	std::cout << "Enter the number of input elements from "<< minSize <<" to "<< maxSize <<"\n";
	unsigned short size;
	long int sum = 0;
	std::cin >> size;
	if (size >= minSize && size <= maxSize);

	else {
		std::cout << "Range should beat from " << minSize << " to " << maxSize << "\n";
	}
	short minRange = -60;
	short maxRange = 90;
	std::cout << "Enter numbers from "<< minRange <<" to "<< maxRange <<"\n";
		for (int i = 0; i < size; i++) {
			std::cin >> number;
			if (number >= minRange && number <= maxRange) {
					if (number % 2 != 0) {
						sum += number;
					}
			}
			else {
				std::cout << "Range of numbers should beat from " << minRange << " to " << maxRange << "\n";
			}
		}
	std::cout << "Sum of odd numbers = " << sum;
	return 0;
}
