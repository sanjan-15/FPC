#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter divisor\n");
    scanf("%d",&n);
    for(i=1;i<=1000;i++)
       {
        if(i%n==0)
          {
            printf("%d ",i);
            sum+=i; 
          }
       }
    printf("Sum of divisors till 1000 is %d",sum);
    return 0; 
}