#include <stdio.h>
void swapNumbers(int *x,int *y);
int main()
{
    int e1,e2;	
    printf(" Input the value of 1st element : ");
    scanf("%d",&e1);
	printf(" Input the value of 2nd element : ");
    scanf("%d",&e2);
	
	
    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n",e1,e2);
    swapNumbers(&e1,&e2);
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n\n",e1,e2);
    return 0;
}
void swapNumbers(int *x,int *y)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=tmp;
}