#include<stdio.h>
int main(){
    struct book
    {
        char bookname[100];
        char author[100];
        int bookid;
        int qty;
        int amount;
        int price;

    } b1;
    
    printf("\nEnter the name of book: ");
    scanf("%s",&b1.bookname);

    printf("\nEnter the author name: ");
    scanf("%s",&b1.author);

    printf("\nEnter the bookid: ");
    scanf("%d",&b1.bookid);

    printf("\nEnter the book qty: ");
    scanf("%d",&b1.qty);

    printf("Enter the price of book: ");
    scanf("%d",&b1.price);

    b1.amount = (b1.price*b1.qty);
    
    printf("\n Detial of book is = %s%d",b1.bookname, b1.author, b1.bookid, b1.qty, b1.price);
    printf("\n Total amount of book = %d",b1.amount);

    return 0;
}
