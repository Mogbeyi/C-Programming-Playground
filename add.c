#include <stdio.h>
#include <stdlib.h>

int *Add(int *a, int *b) {
    int *c = (int*)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int main() {
    int x = 6;
    int y = 5;
    int *ans = Add(&x, &y);
    printf("The sum of %d and %d is %d\n", x,y,*ans);
}
