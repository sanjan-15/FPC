#include<stdio.h>
#include <math.h>
double read_input();
double perim(double a, double b, double c);
double ar(double a, double b, double c);
double print_value(double val);
int main()
{
  read_input();
  return 0;
  
}
double read_input()
{
    double a,b,c;
    printf("Enter three sides of triangle");
    scanf("%lf %lf %lf",&a,&b,&c);
    double area,perimeter;
    area = ar(a,b,c);
    perimeter = perim(a,b,c);
    printf("Perimeter is =");
    print_value(perimeter);
    printf("Area is = ");
    print_value(area);
    return 0;
}
double perim(double a, double b, double c)
{
    double perimeter = (a+b+c);
    return perimeter;
}
double ar(double a, double b, double c)
{
    double s,area;
    s = (a+b+c)/2;
    area = pow((s*(s-a)*(s-b)*(s-c)),0.5);
    return area;
}
double print_value(double val)
{
    printf("%.2lf",val);
    return 0;
}

