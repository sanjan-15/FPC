#include <stdio.h>
#include <math.h>
struct point
{
  float x,y;
};
typedef struct point point;
point input(point p)
{
  printf("Enter coordinates of x and y\n");
  scanf("%f%f",&p.x,&p.y);
  return p;
}
float compute(point p1,point p2)
{
  float d;
  d = sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
  return d;
}
void output(point p1,point p2,float d)
{
  printf("distance btw (%.0f,%.0f) and (%.0f,%.0f) is %.2f",p1.x,p1.y,p2.x,p2.y,d);
}
int main()
{
  point p1,p2;
  float d;
  p1 = input(p1);
  p2 = input(p2);
  d =  compute(p1,p2);
  output(p1,p2,d);
  return 0;
}