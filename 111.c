#include<stdio.h>
int main()
{
    int sum=0,i,n,t=1;
    printf("Enter no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        sum =sum+t;
        printf("%d ",t);
        t=t*10+1;
       }
    printf("Sum is %d",sum);
    return 0;   
}