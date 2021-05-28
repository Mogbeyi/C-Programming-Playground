#include <stdio.h>
int fact(int n);

int main() {
  for (int i = 1; i <= 10; i++) {
    printf("The factorial of %d is %d\n", i, fact(i));
  }
}

int fact(int n) {
  if (n == 1) return 1;
  return n * fact(n - 1);
}
