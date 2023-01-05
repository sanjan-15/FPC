#include<stdio.h>
int main()
{
    int i,n,j,sp,k;
    printf("Enter no. of rows");
    scanf("%d",&n);
    sp=n-1;
    for(i=1;i<=n;i++)
       {
         for(j=sp;j>=1;j--)
            printf(" ");
         for(k=1;k<=i;k++)
            printf("%d",k);
         for(k=i-1;k>=1;k--)
            printf("%d",k);   
         sp--;        
         printf("\n");
       } 
    return 0;   
}