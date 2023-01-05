#include<stdio.h>
int main()
{
    int f,s,*fn = &f,*sn = &s;
    printf("Enter two nos.");
    scanf("%d %d",fn,sn);
    if(*fn>*sn)
       printf("%d is greater",*fn);
    else if(*sn>*fn)
       printf("%d is greater",*sn);
    return 0;   
}