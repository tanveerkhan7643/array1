#include<stdio.h>
#include<string.h>
int main(){
    char [10][20] = {"tanveer","zeeshan","akif","hamza","halema"};
    char guess[20];
    int i,flag = 0;

    printf("\n Enter the guessing name: ");
    scanf("%s",&guess);

    for (i = 0; i < 5; i++)
    {
        printf("your given name is %s\t",givenname[i]);

        if (strcmp(guess,givenname[i])==0)
        {
            printf("you guess the correct name\n");
            printf("position of guessing name is %d\n",i);
            flag = 1;
            break;
        }
        
    }
    

    return 0;
}