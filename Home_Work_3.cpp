/////////////////Calculate Sum And Arithmetic/////////////////////

#include <iostream>


int main() {
	unsigned int number;
	std::cin >> number;
	std::cout << "Sum of number "<< number<<"===\t";
	long double sum = 0;
	int count = 0;
	for (; number != 0;) {
		sum += number % 10;
		number /= 10;
		count++;
	}
	std::cout << sum <<"\n";
	std::cout << "Arithmetic average ===\t";
	auto mult = sum / count;
	std::cout << mult;
	return 0;
}


//////////////Lucky Ticket/////////////////

#include <iostream>

int main()
{
	int a, numberFirst = 0, numberSecond = 0;
	std::cout << "Input 6 - number\n";
	std::cin >> a;
	for (int i = 0; i < 3; i++)
	{
		numberFirst += a % 10;
		a /= 10;
	}
	for (int i = 0; i < 3; i++)
	{
		numberSecond += a % 10;
		a /= 10;
	}
	if (numberFirst == numberSecond) {
		std::cout << "Your ticket is lucky";
	}
	else {
		std::cout << "It's not your lucky day";
	}
	return 0;
}
