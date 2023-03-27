#include<stdio.h>
void input(int *a,int *b)
{
    printf("enter two nos.\n");
    scanf("%d%d",a,b);
}
void sum_num(int a, int b,int *sum)
{
    printf("%d %d\n",a,b);
    *sum = a+b;
}
void output(int a, int b, int sum)
{
    printf("%d is the sum of %d+%d",sum,a,b);
}
int main()
{
    int a,b,sum;
    input(&a,&b);
    sum_num(a,b,&sum);
    output(a,b,sum);
}