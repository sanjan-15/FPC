#include<stdio.h>
int main()
{
    int i,j,n,l=1;
    printf("Enter no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        for(j=1;j<=i;j++)
           {printf("%d",l++);}
        printf("\n");
        }

    return 0;    
}