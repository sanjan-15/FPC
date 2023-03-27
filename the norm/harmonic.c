#include<stdio.h>
int main()
{
    float sum=0,i,n,j;
    printf("Enter no. of harmonic numbers to be added");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
        {
            sum=sum+1/i;
        }
    printf("Sum of harmonic series is %f",sum);
    return 0;
}    