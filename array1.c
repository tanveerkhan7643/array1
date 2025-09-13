#include<stdio.h>
int main(){
    float temp[10],sum=0,average;
    int i;
    printf("Enter the temprature of 10 days: ");
    for ( i = 1; i < 10; i++)
    {
        scanf("%f",&temp);
        printf("Day %d",i+1);
        sum += temp[i];
    }
    // Calculate average
    average = sum / 10;
    printf("average temprature over 10 days = %.2f\n",average);

    return 0;
    
    
}
