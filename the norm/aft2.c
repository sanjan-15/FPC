#include <stdio.h>

void input(float *ax,float *ay)
{
    printf("Enter x and y of the point\n");
    scanf("%f%f",ax,ay);
}
int main()
{
    float x,y;
    input(&x,&y);
    printf("%d %d ",x,y);
}