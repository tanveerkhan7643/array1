#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Negative number ka factorial nahi hota
    if (n < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } else {
        for(i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}
