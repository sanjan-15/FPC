#include<stdio.h>
int main()
{
    int f=0,s=1,n,i,g;
    printf("Enter no. of terms");
    scanf("%d",&n);
    printf("Fibonacci nos. till %d are",n);
    printf("%d %d ",f,s);
    for(i=3;i<=n;i++)
       {
        g=s+f;
        printf("%d ",g);
        f=s;
        s=g;
       }
    return 0;
}