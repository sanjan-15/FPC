#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a,b,n;
    printf("Enter numbers a and b");
    scanf("%d %d",&a,&b);
    swap(a,b);
    
}
void swap(int a,int b)
{
    int c=a;
    a=b;
    b=c;
    printf("a = %d and b = %d",a,b);
}
