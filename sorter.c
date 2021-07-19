#include <stdio.h>

int compare(int a, int b) {
    return a > b ? 1: -1;
}

/*
  Callback function should compare two integers, should return 1 if first element has
  higher rank, 0 if elements are equal and - 1 if second element has higher rank
 */
void bubbleSort(int A[], int n, int(*compare)(int, int)) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (compare(A[i], A[j]) < 0) { 
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
    bubbleSort(A, size, compare);
    for(int i = 0; i < size; i++) printf("%d ", A[i]);
}
