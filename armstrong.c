#include <stdio.h>
void armstrong(int n);
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    armstrong(n);
    return 0;  
}
void armstrong(int n)
{
    int i;
    int j,sum=0;
    for(i=n;i!=0;i/=10)
       {
         j=i%10;
         sum = sum +(j*j*j);
       }
    if(sum==n)
       printf("%d is an armstrong number",n);
    else  
       printf("%d is not an armstrong number",n);     
       
}