#include<stdio.h>
int main()
{
    int sum=0,i,n,t=9;
    printf("Enter no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        sum =sum+t;
        printf("%d ",t);
        t=t*10+9;
       }
    printf("Sum is %d",sum);
    return 0;   
}