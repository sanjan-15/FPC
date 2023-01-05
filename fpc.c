#include<stdio.h>
int main()
{
  float a,b;
  char c;
  printf("enter first no.\n");
  scanf("%f",&a);
  printf("enter second no.\n");
  scanf("%f",&b);
  printf("Enter operation '+','-','*','/'\n");
  scanf(" %s",&c);
  if(c=='+')
    printf("Sum is %f",a+b);
  else if(c=='-')
    printf("Difference is %f",a-b);
  else if(c=='*')
    printf("Product is %f",a*b);
  else if(c=='/')
    printf("Quotient is %f ",a/b);
  return 0;
}