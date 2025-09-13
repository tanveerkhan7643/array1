// Read n number into an array and sort it accending order.
#include<stdio.h>
int main(){
    int n,i,j,temp;
    int arr[n];

    // Read n number into array
    printf("Enter the number you want to sort: ");
    scanf("%d",&n);
    printf("Enter %d number:",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("\nActual array is:%d",n);
    
    for (i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    for (i = 0; i < n-1; i++)
    {
        for (j = 1; j < i+1 ; j++)
        {
            if (arr[i] > arr[j])  
            {
                temp = arr[i];
                arr[j] = arr[i];
                temp = arr[j];
            } 
        }
    }
    // print the result
    printf("Sorted array in acsending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    
   return 0; 
    
}

