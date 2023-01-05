#include<stdio.h>
int add(int a,int b); //function declaration
int main()
{
    int a,b;
    printf("Enter two nos. \n");
    scanf("%d %d",&a,&b);
    int sum= add(a,b);   //function call
    printf("%d",sum);

}
int add(int a,int b)
{
    int sum = a+b;
    return sum;
}