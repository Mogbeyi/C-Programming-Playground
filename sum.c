#include <stdio.h>

int sum(int A[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += A[i];
    }

    return total;
}

int main() {
    int A[] = {1,2,3,4,5};
    int size = sizeof(A) / sizeof(A[0]);
    int ans = sum(A, size);
    printf("The sum is %d\n", ans);
}
