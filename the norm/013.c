#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter coordinates of point 1\n");
    scanf("%f%f",x1,y1);
    printf("Enter coordinates of point 2\n");
    scanf("%f%f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float dis;
    dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return dis;

}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,distance);
}
int main()
{
    float x1,x2,y1,y2,dist;
    input(&x1,&y1,&x2,&y2);
    dist = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,dist);
    return 0;
}