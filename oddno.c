#include<stdio.h>
int main()
{
    int i,j=1,n;
    printf("Enter number of odd numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {printf("%d\n",j);
        j+=2;
       }
    return 0;   
}