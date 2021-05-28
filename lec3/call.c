#include <stdio.h>
void func(int a, int b, int c);

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  printf("The value of a, b and c before the function call is %d %d %d\n", a, b, c);
  func(a, b, c);
  printf("The value of a, b and c after the function call is %d %d %d\n", a, b, c);
}

void func(int a, int b, int c) {
  a = 98; b = 99; c = 100;

  printf("The value of a, b and c inside the function call is %d %d %d\n", a, b, c);
}
