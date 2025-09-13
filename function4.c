#include<stdio.h>
float calculateNetsalary(char empname[], int empid, float basic_salary){
    
    float HRA, DA, PH, net_salary;

    HRA = 0.20 * basic_salary;
    DA = 0.15 * basic_salary;
    PH = 0.10 * basic_salary;

    net_salary = basic_salary + HRA + DA - PH;
  
    // Disply detials
    printf("\nEmploy name: %s",empname);
    printf("\nEmploy id: %d",empid);
    printf("\nEmploy basic salary: %.2f",basic_salary);
    printf("\nEmploy net salary: %.2f",net_salary);

    return net_salary;
}
int main(){
    int id;
    char name[30];
    float basic;
    
    printf("Enter employ name: ");
    scanf("%s",name);

    printf("Enter employ ID: ");
    scanf("%d",&id);

    printf("Enter employ basic salary: ");
    scanf("%f",&basic);

    calculateNetsalary(name,id,basic);
    return 0;
}
