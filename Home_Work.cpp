#include <iostream> 
#include <cmath> 

int main(){
	int  a,b,c;
	std::cout << "Please enter number = a,b,c- in the range = from -32767 to 32767. To solve the square equation\n";
	short max= std::numeric_limits<short>::max();
	short min= std::numeric_limits<short>::min();
	
	std::cin >> a>>b>>c;
	if (a >= min && a <= max && b >= min && b <= max && c >= min && c <= max) {
	  const unsigned int NUMBER_FOUR = 4;
	  const unsigned int NUMBER_TWO = 2;
	  const auto COUNT2A = NUMBER_TWO * a;
	  auto  D = std::pow(b, 2) - NUMBER_FOUR * a * c;
	  if (D > 0) {
	    std::cout << "Since the discriminant is greater than zero, the quadratic equation has two real roots:/n";
	    auto  desk = std::sqrt(D);
	    auto  x1 = (-b - desk) / (COUNT2A);
	    auto  x2 = (-b + desk) / (COUNT2A);
	    std::cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << "\n";
	  }
	  else if (D == 0) {
	    std::cout << "Since the discriminant is zero, the quadratic equation has one real root:\n";
	    auto x = (-b) / COUNT2A;
	    std::cout << "x = " << x << "\n";
	  }
	  else {
	    std::cout << "Since the discriminant is less than zero, the equation has no real solutions.\n";
	  }
  	}
	else {
		std::cout << "non-range number";
	}
}
