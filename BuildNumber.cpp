#include <iostream>
#include <limits>

int main(){

	unsigned long long  numA,numB,numC;
	unsigned long long max = std::numeric_limits<unsigned long>::max();
	unsigned long long min = std::numeric_limits<unsigned long>::min();
	std::cout << "Enter three numbers A, B, C \n";
	std::cin >> numA >> numB >> numC;
	unsigned long long newNum;
	if (numA>= min && numA <= max) {
		if (numB >= min && numB <= max) {
			if (numC >= min && numC <= max) {
				newNum = numA * 10000 + numB * 1000 + numC * 100;

				if (newNum % 3 == 0) {
					std::cout << newNum << " = This number is divided by 3 ";
				}
				else {
					std::cout << newNum << " = This number is not divisible by 3";
				}
        
			}
			else {
				std::cout << "Number C not range ";
			}
		}
		else {
			std::cout << "Number B not range ";
		}
	}
	else {
		std::cout << "Number A not range ";
	}
	return 0;
}
