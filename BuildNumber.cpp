#include <iostream>
#include <limits>

int main(){

  unsigned int numA,numB,numC;
  const unsigned short MAX max = std::numeric_limits<unsigned short>::max();
  const unsigned short MIN = std::numeric_limits<unsigned short>::min();
  std::cout <<"If you want to build a new number\n"<<"please enter three numbers A, B, C \n";
  std::cin >> numA;
  if (numA>= min && numA <= max) {
    std::cin >> numB;
    if (numB >= min && numB <= max) {
      std::cin >> numC;
      if (numC >= min && numC <= max) {
        unsigned long newNum;
        newNum = numA * 10000 + numB * 1000 + numC * 100;
        newNum % 3 == 0 ? std::cout << newNum << " = This number is divided by 3 " : std::cout << newNum << " = This number is not divisible by 3";
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
