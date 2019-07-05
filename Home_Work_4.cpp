#include <iostream>

void FindDiget(char *arg_symbol, int arg_length) {
  if (nullptr != arg_symbol) {
    size_t count = 0;
    for (size_t i = 0; i < arg_length; ++i) {
      if (arg_symbol[i] >= '0' && arg_symbol[i] <= '9'){
        ++count;
        arg_symbol[i];
      }
    }
    if (count > 0){
      std::cout << "Is Dig = ";
      for (size_t i = 0; i < arg_length; ++i) {
        if (arg_symbol[i] >= '0' && arg_symbol[i] <= '9') {
          std::cout<<arg_symbol[i];
        }
      }
    }
    else {
      std::cout << "No digits in string \n";
    }
  }
  else {
    std::cout << "Your symbol = 0 \n";
  }
}

void Tolower(char *arg_symbol, int arg_length) {
if (nullptr != arg_symbol) {
  if (NULL != arg_length) {	
	
    for (size_t i = 0; i <= arg_length; ++i) {
      if (arg_symbol[i] >= 'A' && arg_symbol[i] <= 'Z') {
        const unsigned short MAGIK_NUM = 32;
        size_t temp = arg_symbol[i] + MAGIK_NUM;
        std::cout << (char)temp;
      }
      else {
        std::cout << arg_symbol[i];
      }
    }
  }	
}

void ToUpper(char *arg_symbol,int arg_length){
  if (nullptr != arg_symbol) {
    if (NULL != arg_length) {
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
    else {
      std::cout << "Your length string = 0 \n";
    }
  }
  else {
    std::cout << "Your symbol = 0 \n";
  }
}

void ReversString(char *arg_str,int arg_length) {
  if (nullptr != arg_str) {
    if (NULL != arg_length) {
      for (size_t i = 0, j = arg_length - 1; i < j; ++i, --j) {
        size_t temp = arg_str[i];
        arg_str[i] = arg_str[j];
        arg_str[j] = temp;
      }
    std::cout << arg_str << std::endl;
    }
    else {
      std::cout << "Your length string = 0 \n";
    }
  }
  else {
    std::cout << "Your symbol = 0 \n";
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
