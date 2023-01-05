#include<stdio.h>
float add(float n1,float n2);
float sub(float n1,float n2);
float mul(float n1,float n2);
float div(float n1,float n2);
int main()
{
    char o;
    float n1,n2,result;
    printf("Enter '+' to add, '-' to subtract, '*' to multiply, '/' to divide");
    scanf("%c",&o);
    printf("Enter number 1 and 2\n");
    scanf("%f %f",&n1,&n2);
    if(o=='+')
       result = add(n1,n2);
    else if(o == '-')
        result = sub(n1,n2);
    else if(o == '*')
        result = mul(n1,n2);
    else if('/')
        result = div(n1,n2); 
    printf("Result id is %.2f",result);          

}
float add(float n1,float n2)
{
    float result = n1+n2;
    return result;
}
float sub(float n1,float n2)
{
    float result = n1-n2;
    return result;
}
float mul(float n1,float n2)
{
    float result = n1*n2;
    return result;
}
float div(float n1,float n2)
{
    float result = n1/n2;
    return result;
}
