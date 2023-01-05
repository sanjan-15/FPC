#include <math.h>
#include <stdio.h>
// int read_input();
int perim(int a, int b, int c);
int ar(int a, int b, int c);
int print_value(int perimeter, int area);
int main() {
  int a, b, c, area, perimeter, val;
  // read_input(a,b,c);
  printf("Enter sides of a triangle ");
  scanf("%d %d %d", &a, &b, &c);
  perimeter = perim(a, b, c);
  area = ar(a, b, c);
  print_value(perimeter, area);
}
/*int read_input(int a,int b,int c)
{
    printf("Enter three sides of triangle");
    scanf("%d %d %d",&a,&b,&c);
}*/
int perim(int a, int b, int c) {
  int perimeter = a + b + c;
  return perimeter;
}
int ar(int a, int b, int c) {
  int s, area, perimeter;
  s = (a + b + c) / 2;
  area = pow((s * (s - a) * (s - b) * (s - c)), 0.5);
  return area;
}
int print_value(int area, int perimeter) {
  printf("The perimeter of the triangle is %d and area of the triangle is %d",
         perimeter, area);
}