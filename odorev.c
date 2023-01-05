#include<stdio.h>
void odorev(int n);
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    odorev(n);
    return 0;
}
void odorev(int n)
{
    if(n%2==0)
     printf("%d is even",n);
    else
     printf("%d is odd",n);
}
