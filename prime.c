#include<stdio.h>
int main()
{
    int i,n,j=0;
    printf("Enter no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
        if(n%i==0)
          j++;
       } 
    if(j==2)
      printf("Number is a prime no.");
    else if(j==1)
      printf("Number is a unique no.");
    else
      printf("Number is a composite no.");
    return 0;          
}