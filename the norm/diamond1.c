#include<stdio.h>
int main()
{
   int i,n,j,sp,k;
   printf("Enter no. of rows (half) ");
   scanf("%d",&n);
   sp=n-1;
   for(i=1;i<=n;i++)
      {
        for(j=sp;j>=1;j--)
           {printf(" ");
           }
        for(k=1;k<=i;k++)
           {
            printf("* ");
           }
        printf("\n");   
        sp--;      
      } 
   sp=n-3;  
   for(i=n-1;i>=1;i--)
      {
        for(j=1;j<=sp-1;j++)
           {
            printf(" ");
           } 
        for(k=i;k>=1;k--)
           {
            printf("* ");
           }  
        printf("\n"); 
        sp++;   
      }  
    return 0;  
}