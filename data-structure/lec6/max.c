#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 5, 6, 8, 10, 100, -23};
    int length = sizeof(numbers) / sizeof(int);
    int max = numbers[0];
    int nextMax;
   
    for (int i = 0; i < length; i++) {
        if (numbers[i] > max) {
            nextMax = max;
            max = numbers[i];
       
        } else if (nextMax < numbers[i]) {
            nextMax = numbers[i];
        }
    }

    printf("The maximum and next maximum is %d and %d\n", max, nextMax);
}

