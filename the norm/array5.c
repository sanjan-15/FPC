#include <stdio.h>
void proc(int n1[10])
{
    int i,l=1,n2[10];
    for(i=0;i<=9;i++)
    {
        printf("Enter no. %d: ",l++);
        scanf("%d",&n2[i]);    
    }
    for(i=0;i<=9;i++)
         n1[i]+=n2[i];
    for(i=0;i<=9;i++)   
       {
        printf("A = %d\n",n1[i]);
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
    proc(n1);
    for(i=0;i<=9;i++)   
       {
        printf("B = %d\n",n1[i]);
       } 
}