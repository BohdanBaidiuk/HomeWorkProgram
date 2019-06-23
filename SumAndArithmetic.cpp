#include <iostream>
#include <limits>


int main() {
	unsigned number;
	unsigned max = std::numeric_limits<unsigned short>::max();
	unsigned min = std::numeric_limits<unsigned short>::min();
	std::cout << "Input number - from "<< min <<" to "<< max <<"\n";
	std::cin >> number;
	if (number >= min && number <= max) {
		std::cout << "\n";
		std::cout << "Sum of number " << number << " ===\t";
		long double sum = 0;
		int count = 0;
		for (; number != 0;) {
			sum += number % 10;
			number /= 10;
			count++;
		}
		std::cout << sum << "\n\n";
		std::cout << "Arithmetic average ===\t";
		auto mult = sum / count;
		std::cout << mult << "\n";
	}
	else {
		std::cout << "Not range";
	}
	return 0;
}
