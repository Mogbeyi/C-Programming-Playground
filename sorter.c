#include <stdio.h>

void bubbleSort(int A[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main() {
    int A[] = {3,2,1,5,6,4};
    int size = sizeof(A) / sizeof(int);
    bubbleSort(A, size);
    for(int i = 0; i < size; i++) printf("%d ", A[i]);
}
