#include<stdio.h>
#include <math.h>
void input();
int is_tri(float x1, float x2,float x3,float y1,float y2,float y3);
void output(float x1, float x2,float x3,float y1,float y2,float y3,int result);
int main()
{
    float x1,x2,x3,y1,y2,y3;
    input();
    return 0;
}
void input()
{
    float x1,x2,x3,y1,y2,y3;
    int result;
    printf("Enter coordinates of pt 1\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of pt 2\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter coordinates of pt 3\n");
    scanf("%f%f",&x3,&y3);
    is_tri(x1,x2,x3,y1,y2,y3);
    output(x1,x2,x3,y1,y2,y3,result);
}
int is_tri(float x1, float x2,float x3,float y1,float y2,float y3)
{
    float xy1,xy2,xy3;
    int result;
    result = 0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
    return result;   
}
void output(float x1, float x2,float x3,float y1,float y2,float y3,int result)
{
    result = is_tri(x1,x2,x3,y1,y2,y3);
    if (result == 0)
       printf("The three points do not form a triangle");
    else
       printf("The three points form a triangle");    
}
