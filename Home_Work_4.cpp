#include <iostream>

void FindDigest(char arg_symbol[]) {
  int size = 0;
  for (; arg_symbol[size] != '\0'; size++);
  for (int i = 0 ; i < size ; i++) {
    if (arg_symbol[i] >= '0' && arg_symbol[i] <= '9') {
     std::cout << arg_symbol[i];
    }
  }
}

void Tolower(char arg_symbol[]) {
  char temp[50];
  int size = 0;
  for (; arg_symbol[size] != '\0'; size++);
  for (int i = 0 ; i <= size ; i++) {
    if (arg_symbol[i] >= 'A' && arg_symbol[i] <= 'Z') {
      temp[i] = arg_symbol[i] + 32;
      std::cout << temp[i];
    }
    else {
      std::cout<<arg_symbol[i];
    }
  }
	
}

void ToUpper(char arg_symbol[]) {
  char temp[50];
  int size = 0;
  for (; arg_symbol[size] != '\0'; size++);
  for (int i = 0 ; i <= size ; i++) {
    if (arg_symbol[i] >= 'a' && arg_symbol[i] <= 'z') {
      temp[i] = arg_symbol[i] - 32;
      std::cout << temp[i];
    }
    else {
      std::cout<<arg_symbol[i];
    }
  }
}
void ReversString(char arg_str[]) {
  char temp;
  int size = 0;
  for ( ; arg_str[size] != '\0'; size++);
  size--;
  for (int i=0 ; i <= size ; i++){
    temp = arg_str[i];
    arg_str[i] = arg_str[size];
    arg_str[size] = temp;
    size--;
  }
}



int main() {

  const unsigned size = 50;
  char symbol[size];
  std::cout << "Enter symbols = ";
  std::cin >> symbol;
  unsigned short choice;
  std::cout << "Input choice = \n" <<
    "1 - Find number in string\n" <<
    "2 - uppercase translation\n" <<
    "3 - lower case conversion\n" <<
    "4 - revers for string\n";
  std::cin >> choice;
  switch (choice) {
  case 1:
    std::cout << "Is digest = ";
    FindDigest(symbol);
    break;
  case 2:
    Tolower(symbol);
    break;
  case 3:
    ToUpper(symbol);
    break;
  case 4:
    ReversString(symbol);
    std::cout << symbol;
    break;

  default:
    std::cout << "Eror";
  break;
  }
}
