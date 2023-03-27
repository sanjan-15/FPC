#include <stdio.h>
void mul(int n1[10])
{
    int i,l=1;
    for(i=0;i<=9;i++)
         n1[i]*=6;
    for(i=0;i<=9;i++)   
       {
        printf("1 = %d\n",n1[i]);
       } 
}
int main()
{
    int n1[10],i,l=1,sum;
    for(i=0;i<=9;i++)
    {
        printf("Enter no. %d: ",l++);
        scanf("%d",&n1[i]);    
    }
    mul(n1);
    for(i=0;i<=9;i++)   
       {
        printf("2 = %d\n",n1[i]);
       } 
}