#include<stdio.h>
int main()
{
    int i,n,t;
    printf("Enter table number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
       {t=n*i;
        printf("%d\n",t);
       }
    return 0;   
}