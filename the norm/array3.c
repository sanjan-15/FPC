#include <stdio.h>
int mul(int sum)
{
    int n,n1[n],i,l=1;
    sum = 0;
    printf("Enter no. of terms ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter no. %d: ",l++);
        scanf("%d",&n1[i]);    
    }
    for(i=0;i<n-1;i++)
    {
        sum+=(n1[i]*n1[i+1]);
    }
    return sum;
}
int main()
{
    int sum;
    printf("%d is the required sum",mul(sum));
}
