#include<stdio.h>
void input();
int sum_num(int, int);
void output(int, int, int);
void input()
{
    int a,b;
    printf("enter two nos.\n");
    scanf("%d%d",&a,&b);
    int sum = sum_num(a,b); 
    output(a,b,sum);
}
int sum_num(int a, int b)
{
    int sum = a+b;
    return sum;
}
void output(int a, int b, int sum)
{
    printf("%d is the sum of %d+%d",sum,a,b);
}
int main()
{
    input();
}