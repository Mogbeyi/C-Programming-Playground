#include <stdio.h>

void print(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c ", arr[i]);
    }
}

int main() {
    char arr[20] = "Hello";
    print(arr);
}

