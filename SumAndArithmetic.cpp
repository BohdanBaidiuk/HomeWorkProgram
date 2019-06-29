#include <iostream>
#include <limits>


int main() {
  unsigned number;
  const unsigned short MAX = std::numeric_limits<unsigned short>::max();
  const unsigned short MIN = std::numeric_limits<unsigned short>::min();

  std::cout <<"Calculate the sum and arithmetic mean of numbers in the number \n"
  "Input number - from "<< MIN <<" to "<< MAX <<"\n";
  "But number should not be 0 \n";
  std::cin >> number;
  if(number!=0){
    if (number >= MIN && number <= MAX) {
      std::cout << "\n";
      std::cout << "Sum of number " << number << " ===\t";
      long sum = 0;
      unsigned count = 0;
      while (number != 0) {
        sum += number % 10;
        number /= 10;
        count++;
      }
      std::cout << sum << "\n\n";
      std::cout << "Arithmetic average ===\t";
      auto division = sum / (count + 0.f);
      std::cout << division << "\n";
    }
    else {
      std::cout << "Number range from "<<MIN<<" to "<<MAX;
    }
  }
  else{
      std::cout << "Number should not be 0;
  }
  return 0;
}
