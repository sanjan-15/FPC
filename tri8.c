#include<stdio.h>
int main()
{
    int i,j,n,k,sp;
    char b;
    printf("Enter no. of rows");
    scanf("%d",&n);
    sp=(4*n)-1;
    for(i=1;i<=n;i++)
       {
        b='A';
        for(j=sp;j>=1;j--)
           {
            printf(" ");
           }
        for(k=1;k<=i;k++)
           {
             printf("%c ",b);
             b++;
           }  
        b=b-2;    
        for(k=1;k<=i-1;k++)
           {
            printf("%c ",b);
            b--;
           }    
        printf("\n"); 
        sp=sp-2;  
       }
    return 0;   
}