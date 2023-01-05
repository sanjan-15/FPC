#include <stdio.h>
int addno(int *,int *);
int main()
{
    int f,s,sum;
    printf("Enter two numbers");
    scanf("%d %d",&f,&s);
    sum = addno(&f,&s);
    printf("Sum is %d",sum);
    return 0 ;
}
int addno(int *n1,int *n2)
{
    int sum;
    sum = *n1+*n2;
    return sum;
}