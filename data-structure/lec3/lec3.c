#include <stdio.h>

int main() {
  int numbers[] = {2, 3, 9, 23, 9, 90, 100, 45};
  int arraySize = sizeof(numbers) / sizeof(int);
  int max = numbers[0];

  for (int i = 1; i < arraySize; i++) {
    if (numbers[i] > max) max = numbers[i];
  }

  printf("The maximum number is %d\n", max);
}

