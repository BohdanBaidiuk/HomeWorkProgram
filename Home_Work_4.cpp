#include <iostream>

void FindDiget(char *arg_symbol, int arg_length) {
 if (nullptr != arg_symbol) {
    return;
 }
 bool is_digit_present = false;
 for (size_t i = 0; i < arg_length; ++i) {
   if (arg_symbol[i] >= '0' && arg_symbol[i] <= '9') {
     is_digit_present = true;
     break;
   }
   if (is_digit_present) {
   std::cout << "Is Digit = ";
   for (size_t i = 0; i < arg_length; ++i) {
     auto ch = arg_symbol[i];
     if (ch >= '0' && ch <= '9') {
       std::cout << ch;
     }
   }
 }
 else {
   std::cout << "No digits in string \n";
 }
}

void Tolower(char *arg_symbol, int arg_length) {
if (nullptr != arg_symbol) {
  return;
}
    const unsigned short MAGIK_NUM = 32;
    for (size_t i = 0; i <= arg_length; ++i) {
      if (arg_symbol[i] >= 'A' && arg_symbol[i] <= 'Z') {
        size_t temp = arg_symbol[i] + MAGIK_NUM;
        std::cout << (char)temp;
      }
      else {
        std::cout << arg_symbol[i];
      }
    }
  	
}

void ToUpper(char *arg_symbol,int arg_length){
 if (nullptr != arg_symbol) {
   return;
 }
      const unsigned short MAGIK_NUM = 32;
      for (size_t i = 0; i <= arg_length; ++i) {
        if (arg_symbol[i] >= 'a' && arg_symbol[i] <= 'z') {
          size_t temp = arg_symbol[i] - MAGIK_NUM;
          std::cout << (char)temp;
        }
        else {
          std::cout << arg_symbol[i];
        }
      }
}

void ReversString(char *arg_str,int arg_length) {
 if (arg_str == nullptr || arg_length == 0) {
    return;
 }
      for (size_t i = 0, j = arg_length - 1; i < j; ++i, --j) {
        size_t temp = arg_str[i];
        arg_str[i] = arg_str[j];
        arg_str[j] = temp;
      }
    std::cout << arg_str << std::endl;
    }
}

enum ChoiseFunc {
	FIND = 1,
	UPPER = 2,
	LOWER = 3,
	REVERS = 4
};


int main() {
  std::cout << "In this program you can = \n"
  "-Find number in string \n" <<
  "-Upper case conversion \n" <<
  "-Lower case conversion \n" <<
  "-Revers for string \n";
  const unsigned SIZE = 255;
  char symbol[SIZE];
  char arrDiget[SIZE];
  std::cout << "Enter STRING = ";
  std::cin >> symbol;
  size_t length = strlen(symbol);
  if (length <= SIZE) {
    std::cout << "Select a function by the following commands : \n";
    std::cout << "---1 = Find number\n"
    << "---2 = Upper case \n"
    << "---3 = Lower case \n"
    << "---4 = Revers \n\n";
    unsigned short choice;
    std::cin >> choice;
    switch (ChoiseFunc(choice)) {
      case FIND:
        FindDiget(symbol, arrDiget, length);
        break;
      case UPPER:
        Tolower(symbol, length);
        break;
      case LOWER:
        ToUpper(symbol, length);
        break;
      case REVERS:
        ReversString(symbol, length);
        break;
      default:
        std::cout << "UNDEFINED CHOICE";
        break;
    }
  }
  else {
    std::cout << "String  very long for program!!!";
  }
  return 0;
}
