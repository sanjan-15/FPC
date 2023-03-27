#include <stdio.h>

void input(float x,float y)
{
    printf("Enter x and y of the point\n");
    scanf("%f%f",&x,&y);
}
int main()
{
    float x,y;
    input(x,y);
    printf("%d %d ",x,y);
}