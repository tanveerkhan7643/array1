#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,sum;
    printf("\n Enter the first row and colunm of matrix: ");
    scanf("%d%d",&r1,&c1);

    printf("\n Enter the second row and colunm of matrix: ");
    scanf("%d%d",&r2,&c2);

    if (r1!=r2 || c1!=c2)
    {
        printf("Matrix addition not possible.order must be same.\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2],sum[r1][c1];
    for (i = 0; i < r1; i++)
    {
         for (j = 0; i < c1; i++)
        {
            printf("%d",a[i][j]);
        }
    }
    for (i = 0; i < r2; i++)
    {
        for (i = 0; i < c2; i++)
        {
            printf("%d",a[i][j]);
        }
    }
    
    if (r1 == r2 && c1 == c2)
    {
        sum = a[i][j] + b[i][j];
        for (i = 0; i < r1; i++)
        {
             for (i = 0; i < c1; i++)
             {
                printf("%d",a[i][j]);
             }
             
        }
        for (i = 0; i < r2; i++)
        {
            for (i = 0; i < c2; i++)
            {
                printf("%d",b[i][j]);
            }
            
        }
        
        printf("The first matrix is:%d\n",a[i][j]);
        
    }
    
    
    
    

    return 0;
}
