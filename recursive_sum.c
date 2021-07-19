#include <stdio.h>

int f(int n);

int main() {
  int answer = f(4);

  printf("The answer is %d\n", answer);
}

int f(int n) {
  if (n <= 1) {
    return 1;
  }

  return f(n - 1) + f(n - 1);
}
