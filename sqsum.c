#include<stdio.h>
int main()
{
    int i,j,n,k,sum=0;
    printf("Enter no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        k=i*i;
        printf("%d ",k);
        sum+=k;
       }
    printf("Sum of squares is %d",sum);   
}