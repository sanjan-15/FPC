#include<stdio.h>
int main()
{
    int i,n;
    int mn,mx,sum;
    printf("Enter minimum");
    scanf("%d",&mn);
    printf("Enter maximum");
    scanf("%d",&mx);
    printf("the perfect nos. are");
    for(n=mn;n<=mx;n++)
       {
        i=1;
        sum=0;
        while(i<n)
             {
                 if(n%i==0)
                      sum=sum+i;
                 i++;
                     
             }
        if(sum==n)
           printf("%d ",n);     
       }
    return 0;
}