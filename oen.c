#include <stdio.h>
int main()
{
    int n[10],i,l=1,o=0,e=0,neg=0;
    for(i=0;i<10;i++)
       {
        printf("Enter term %d :",l++);
        scanf("%d",&n[i]);
       } 
    for(i=0;i<10;i++)
       {
        if(n[i]<0)
          neg++;
        else if(n[i]%2==0)
               e++;
        else
            o++;            
       }   
    printf("Number of even nos. are %d\nNumber of odd nos. are %d\nNumber of negative nos. are %d",e,o,neg);
    return 0;   
}