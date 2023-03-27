#include<stdio.h>
int main()
{
    int i,n,sum=0,r;
    printf("Enter a no.");
    scanf("%d",&n);
    for(;n!=0;n=n/10)
       {
        r=n%10;
        sum=sum*10+r;
       }
    printf("%d is the no. in reverse",sum); 
    return 0;  
}