#include <stdio.h>
void modify(int n[10]);
int main()
{
   int n[10],i,j=1;
   printf("Enter 10 nos.\n ");
   for(i=0;i<10;i++)
      {
        printf("Number %d:",j);
        scanf("%d",&n[i]);
        j++;
      }
    modify(n);  
    j=1;
    for(i=0;i<10;i++)
       {
        printf("New number %d: %d\n",j,n[i]);
        j++;
       }
}
void modify(int n[10])
{
    
    int i;
    for(i=0;i<10;i++)
       {
        n[i] = n[i]*3;
       }
    
}