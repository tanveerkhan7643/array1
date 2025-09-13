#include<stdio.h>
#include<string.h>
#include<ctype.h>
void fullName(char first_name[], char last_name[]){
    int i;
    for (i = 0; i < first_name[i] != '\0'; i++)
    {
        first_name[i] = toupper(first_name[i]);       
    }
    for (i = 0; i < last_name[i] != '\0'; i++)
    {
        last_name[i] = toupper(last_name[i]);
    }
    printf("Your full name is = %s %s\n",first_name,last_name);
    
}

int main(){
    char first[30];
    char last[30];

    printf("\nEnter the first name: ");
    scanf("%s",first);

    printf("Enter the last name: ");
    scanf("%s",last);

    fullName(first,last);
    return 0; 
}

