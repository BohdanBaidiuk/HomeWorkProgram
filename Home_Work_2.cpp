#include <iostream> 
#include <cmath> 
#include <limits>

int main() {
  long long  a, b, c;
  int max = std::numeric_limits<short>::max();
  int min = std::numeric_limits<short>::min();
  std::cout << "Please enter number = a,b,c- in the range = from "<< min <<" to "<< max <<" To solve the square equation\n";
  std::cin >> a >> b >> c;
  if (a!=0 && a >= min && a <= max && b >= min && b <= max && c >= min && c <= max) {
    const unsigned NUM_FOUR = 4;
    const unsigned NUM_TWO = 2;
    auto COUNT_2_A = NUM_TWO * a;
    auto  d = std::pow(b, 2) - NUM_FOUR * a * c;
		
    if (d > 0) {
      std::cout << "Since the discriminant is greater than zero, the quadratic equation has two real roots:\n";
      auto  desk = std::sqrt(d);
      auto  x1 = (-b - desk) / (COUNT_2_A);
      auto  x2 = (-b + desk) / (COUNT_2_A); 
      std::cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << "\n";
    }
    else if (d == 0) {
      std::cout << "Since the discriminant is zero, the quadratic equation has one real root:\n";
      auto x = (-b) / COUNT_2_A;
      std::cout << "x = " << x << "\n";
    }
    else if (d < 0){
      std::cout << "Since the discriminant is less than zero, the equation has no real solutions.\n";
    }
  }
  else {
      std::cout << "non-range number\n";
  }
}
