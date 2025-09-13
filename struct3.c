#include<stdio.h>
struct product
{
    int pid;
    char pname[30];
    int price;
    int qty;
    float amount;
} p[2];

struct customer
{
    int cid;
    char cname;
    char city;
    int total_bill_amount;
    float discount;
    float amount_after_discount;
} c[2];

int main(){
    int i,j;
    for (i = 0; i < 1; i++)
    {
        printf("\nEnter the detials of customer: ");
        printf("\nEnter the customer id: ");
        scanf("%d",&c[i].cid);

        fflush(stdin);
        printf("\nEnter the customer name : ");
        scanf("%s",c[i].cname);

        fflush(stdin);
        printf("\nEnter the city of customer: ");
        scanf("%s",c[i].city);
    }

    for (j = 0; j < 1; j++)
    {
        printf("\nEnter the detials of product: ");
        printf("\nEnter the product id: ");
        scanf("%d",&p[j].pid);
                                            
        fflush(stdin);
        printf("\nEnter the product name : ");
        scanf("%s",p[j].pname);                              

        printf("\nEnter the price of product: ");
        scanf("%d",&p[j].price);

        printf("\nEnter the qty of product: ");
        scanf("%d",&p[j].qty);
    }

    c[i].p[j]. total_bill_amount = c[i].p[j]qty * c
    return 0;
    
}





