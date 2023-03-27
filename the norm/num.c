#include<stdio.h>
int main()
{
    int i,n,sum=0;
    char k;
    printf("Enter no. to be added");
    scanf("%d",&n);
    printf("Enter 'i' if you want to add another no.");
    scanf("%s",&k);
    sum+=n;
    while(k=='i')
          {
           scanf("%d",&n);
           sum+=n;
           scanf("%s",&k);  
          }
    printf("SUM is %d",sum);
    return 0;      
}