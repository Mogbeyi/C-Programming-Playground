#include <stdio.h>

void print(int *A, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(A + i));
    }
}

int main() {
    int A[] = {1, 3, 5, 7};
    int size = sizeof(A) / sizeof(int);
    print(A, size);
}
