#include <stdio.h>
int main()
{
    int f,s,*fn,*sn,sum;
    printf("Enter two nos.");
    scanf("%d %d",&f,&s);
    fn = &f;
    sn = &s;
    sum = *fn + *sn;
    printf("%d is sum",sum);
    return 0;
}