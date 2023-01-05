#include<stdio.h>
int largest_no(int a,int b,int c)
{
    int largest;
    if(a>b&&a>c)
       largest=a;
    else if (b>a&&b>c)
           largest = b;
    else if (c>a&&c>b)
           largest = c;
    return largest;

}
int main()
{
    int a,b,c;
    printf("Enter three nos.");
    scanf("%d %d %d",&a,&b,&c);
    printf("Largest no. is %d",largest_no(a,b,c));

}
 