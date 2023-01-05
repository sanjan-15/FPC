#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,a=0,dec=0;
    printf("Enter binary no.");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
     dec=dec+(i%10)*pow(2,a);
     a++;
    }
    printf("Decimal no. is %d",dec);
    return 0;
}