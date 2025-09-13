#include<stdio.h>
void greed(char *ptr1, char *ptr2){
    printf("\nWelcome to string %s %s",ptr1,ptr2);
}

int main(){
    greed("tanveer","khan");
    greed("masood","khan");
    greed("zeeshan","khan");

    return 0;
}