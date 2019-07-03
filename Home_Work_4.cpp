#include <iostream>

void FindDiget(char *arg_symbol,char *arg_diget, int arg_length) {
  bool dig_check = false;
  int count = 0;
  for (int i = 0; i < arg_length; i++){
    if (arg_symbol[i] >= '0' && arg_symbol[i] <= '9'){
      arg_diget[count++] = arg_symbol[i];
      dig_check = true;
    }
  }
  if (dig_check){
    arg_diget[count] = 0;
    std::cout << "Is Dig = " << arg_diget <<"\n";
  }
  else
    std::cout << "No digits in string \n";	
  }

void Tolower(char *arg_symbol, int arg_length) {
  for (int i = 0; i <= arg_length; i++) {
    if (arg_symbol[i] >= 'A' && arg_symbol[i] <= 'Z') {
      const unsigned short MAGIK_NUM = 32;
      int temp = arg_symbol[i] + MAGIK_NUM;
      std::cout << (char)temp;
    }
    else {
      std::cout << arg_symbol[i];
    }
  }	
}

void ToUpper(char *arg_symbol,int arg_length) {
  for (int i = 0 ; i <= arg_length; i++) {
    if (arg_symbol[i] >= 'a' && arg_symbol[i] <= 'z') {
      const unsigned short MAGIK_NUM = 32;
      int temp = arg_symbol[i] - MAGIK_NUM;
      std::cout << (char)temp;;
    }
    else {
      std::cout<<arg_symbol[i];
    }
  }
}

void ReversString(char *arg_str,int arg_length) {
  for (int i = 0, j = arg_length - 1; i < j; i++, j--) {
    int temp = arg_str[i];
    arg_str[i] = arg_str[j];
    arg_str[j] = temp;
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
  const unsigned SIZE = 100;
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
        std::cout << symbol;
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
