#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;     // p me a ka address

    printf("Value of a = %d\n", a);      // 10
    printf("Address of a = %p\n", &a);   // memory address
    printf("Pointer p = %p\n", p);       // address of a
    printf("Value at pointer p = %d\n", *p); // 10

    return 0;
}

