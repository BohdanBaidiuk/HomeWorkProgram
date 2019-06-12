#include <iostream> 
#include <cmath> 

int main()
{
	setlocale(LC_ALL, "ru");
	double  a;
	std::cin >> a;
	double  b;
	std::cin >> b;
	double  c;
	std::cin >> c;
	const unsigned int VALUE4 = 4;
	const unsigned int VALUE2 = 2;
	const auto VALUE = VALUE2 * a;
	auto  D = std::pow(b, 2) - VALUE4 * a * c;
		if (D>0) {
			auto  desk = std::sqrt(D);
			auto  x1 = (-b - desk) / (VALUE);
			auto  x2 = (-b + desk) / (VALUE);
			std::cout << x1 << "\n" << x2 << "\n";
		}
		else if (D==0) {
			auto x = (-b) / VALUE;
			std::cout << x << "\n";
		}
		else {
      std::cout << "Since the discriminant is less than zero, the equation has no real solutions.\n";
		}
}
