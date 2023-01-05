#include<stdio.h>
int main()
{
   int i,j,n,sp,k,l=1;
   printf("Enter no. of rows ");
   scanf("%d",&n);
   sp=n-1;
   for(i=1;i<=n;i++)
      {
        for(j=sp;j>=1;j--)
           {
            printf(" ");
           }
        for(k=1;k<=i;k++)
           {printf("*");
            l++;
            }
        printf("\n");    
        sp--;

      } 
    return 0;
}  