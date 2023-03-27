#include<stdio.h>
int main()
{
   int i,j,n,sp,k;
   printf("Enter no. of rows");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
      {
        for(j=n-i;j>=1;j--)
           {
            printf(" ");
           }
        for(k=1;k<=i;k++)
           {printf("* ");
            }
        printf("\n");    

      } 
    return 0;
}  