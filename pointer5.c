#include<stdio.h>

struct employ {
    char empname[30];
    char gender[30];
    char skills[5][20];
    int salary;
    int num;
}emp[5]; // Array of structure of 5 emp



int main() {
    int i,j,n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
    printf("\nEnter the employee number: ");
    scanf("%d", &emp[i].num);
    getchar(); // consume newline

    printf("Enter the name: ");
    scanf(" %[^\n]s", emp[i].empname);

    printf("Enter the gender: ");
    scanf(" %[^\n]s", emp[i].gender);

    for (j = 0; j < 5; j++) {
        printf("Enter skill %d: ", j+1);
        scanf(" %[^\n]s", emp[i].skills[j]);
    }

    printf("Enter the salary: ");
    scanf("%d", &emp[i].salary);
}

    printf("\nDisplay the details of employ\n");

    for (i = 0; i < n; i++) {
        printf("number of employ: %d\n",emp[i].num);
        printf("the name is: %s\n",emp[i].empname);
        printf("the gender is: %s\n",emp[i].gender);
        for (j = 0; j < 5; j++) {
            printf("the skills is: %s\n",emp[i].skills);
        }
        printf("the salary is: %d\n",emp[i].salary);
    }
    
    return 0;
}

