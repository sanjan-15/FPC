#include <stdio.h>
#include <math.h>
struct point
{
    float x,y;
};
typedef struct point Point;
Point input(Point p)
{
    printf("Enter points x and y\n");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
float compute(Point p1,Point p2)
{
    float d;
    d= sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
    return d;
}
void output(Point p1,Point p2,float d)
{
    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %f",p1.x,p1.y,p2.x,p2.y,d);
}
int main()
{
    Point p1,p2;
    float d;
    p1 = input(p1);
    p2 = input(p2);
    d = compute(p1,p2);
    output(p1,p2,d);
    return 0;
}