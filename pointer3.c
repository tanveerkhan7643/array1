// Pass by reference

#include<stdio.h>
void change(int *x) {
    *x = *x + 10;  // original variable change
}
int main() {
    int a = 5;
    change(&a);
    printf("a = %d\n",a); 
    return 0;
}
