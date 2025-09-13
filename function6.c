#include<stdio.h>

Maximum(int temps[],int n){
    int max = temps[0];
    for(int i = 0; i < n; i++){
        if(temps[i] > max){
            temps[i] = max;
        }
    }
    return max;
}

int main(){
    int n;
    printf("\nEnter number of days: ");
    scanf("%d",&n);

    int temps[n];
    printf("Enter the temprature of city: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&temps[i]);
    }
    return 0;
}
