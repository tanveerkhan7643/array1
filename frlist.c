#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char fruits[50][20];
    char fr[20],stop;
    int i,n=0;

    printf("Enter fruits names (type 'stop' to end):\n");
    while (1)
    {
        printf("\nEnter the fruit name: ");
        scanf("%s",&fr);
        // fflush(stdin);

        // Puri string ko lowercase me convert karna
        for (int i = 0; fr[i] != '\0'; i++) {
        fr[i] = tolower((unsigned char)fr[i]);
    }

    if (strcmp(fr,"stop")==0){
        break;
    }

    // Store the fruit name in the array
    strcpy(fruits[n],fr);
        n++;
    
    printf("\nThe Entered fruits are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n",fruits[i]);
    }
    
    for (i = 0; i < n-1; i++)
    {
        /* code */
    }
    
    
    }
    
    return 0;
}
