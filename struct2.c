// creat a structure student with data members roll, name, marks in 6 subjects, total, percent and grade 
// write the code to read detials of 2 students and display the result. 
#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int marks[6];
    int total;
    float percent;
    char grade;
};

int main() {
    struct student s[2];
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;
        for (j = 0; j < 6; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percent = (s[i].total / 600.0) * 100;

        if (s[i].percent >= 90)
            s[i].grade = 'A';
        else if (s[i].percent >= 75)
            s[i].grade = 'B';
        else if (s[i].percent >= 60)
            s[i].grade = 'C';
        else if (s[i].percent >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    printf("\n---- Student Results ----\n");
    for (i = 0; i < 2; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %d", s[i].total);
        printf("\nPercentage: %.2f", s[i].percent);
        printf("\nGrade: %c\n", s[i].grade);
    }

    return 0;
}
