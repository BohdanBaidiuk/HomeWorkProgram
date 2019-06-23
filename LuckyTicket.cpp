#include <iostream>

int main()
{
	unsigned short number;

	std::cout << "Input 6 - number\n\n";
	unsigned short max = 9;
	unsigned short min = 0;
	unsigned sumFirst = 0;
	unsigned sumSecond = 0;
	const unsigned short CYCLE = 3;
	for (int i = 0; i < CYCLE; i++) {
			std::cin >> number;
			if (number >= min && number <= max) {
				sumFirst += number;
			}
			
		}
		for (int i = 0; i < CYCLE; i++){
			std::cin >> number;
			if (number >= min && number <= max) {
				sumSecond += number;
			}
		}
		if (sumFirst == sumSecond) {
			std::cout << "Your ticket is lucky\n";
		}
		else {
			std::cout << "It's not your lucky day\n";
		}
	
	return 0;
}
