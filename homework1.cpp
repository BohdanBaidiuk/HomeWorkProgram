#include "Vector.h"
#include <iostream>

struct Point {
  int a;
  int b;
  Point(int x, int z) : a(x), b(z) {}
};

int main() {
  Vector<Point> myVector(0);
  myVector.emplace_back(7, 5);
  return 0;
};
