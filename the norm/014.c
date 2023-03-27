#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter coordinates of three sides of the triangle\n");
    printf("Point 1\n");
    scanf("%f%f",x1,y1);
    printf("Point 2\n");
    scanf("%f%f",x2,y2);
    printf("Point 3\n");
    scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3) 
{
    float s1, s2, s3;
    s1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    s2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    s3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    if (s1 + s2 >= s3 && s2 + s3 >= s1 && s1 + s3 >= s2)
        return 1;
    else
        return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result == 0)
      printf("The triangle is not possible");
    else
      printf("The triangle is possible");   
}
int main()
{
    float x1,x2,x3,y1,y2,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    int result = is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
}