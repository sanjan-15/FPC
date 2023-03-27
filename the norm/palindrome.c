#include<stdio.h>
int main()
{
    int i,n,r,sum=0;
    printf("enter no.");
    scanf("%d",&n);
    i=n;
    while(n!=0){
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
    if(sum==i)
      printf("No. is a palindrome");
    else
      printf("No. is not a palindrome");
    return 0;   
}