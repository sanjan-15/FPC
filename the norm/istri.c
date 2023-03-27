/*#include<stdio.h>
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
    float xy1,xy2,xy3,a,b,c,d,e,f;
    int result;
    a = pow((x2-x1),2);
    b = pow((y2-y1),2);
    c = pow((x3-x2),2);
    d = pow((y3-y2),2);
    e = pow((x1-x3),2);
    f = pow((y1-y3),2);
    xy1 = sqrt(a+b);
    xy2 = sqrt(c+d);
    xy3 = sqrt(e+f);
    printf("%d %d %d",xy1,xy2,xy3);  
    if((xy1+xy2)>xy3||(xy2+xy3)>xy1||(xy1+xy3)>xy2)
       result = 1; 
    return result;   
}
void output(float x1, float x2,float x3,float y1,float y2,float y3,int result)
{
    result = is_tri(x1,x2,x3,y1,y2,y3);
    if (result == 1)
       printf("The three points form a triangle");
    else
       printf("The three points do not form a triangle");    
}*/