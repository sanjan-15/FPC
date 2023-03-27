#include<stdio.h>
#include<math.h>
int main()
{
    int i,n1,n2,j,a,b;
    printf("Enter 1st no.\n");
    scanf("%d",&n1);
    printf("ENter 2nd no.\n");
    scanf("%d",&n2);
    j= (n1<n2)?n1:n2;
    for(i=1;i<=j;i++)
       {
        if(n1%i==0 && n2%i==0)
          {
           a=i; 
          } 
       }
    printf("Hcf of %d and %d is %d\n",n1,n2,a);   
    b = (n1<n2)?n2:n1;   
    while(1){
      if((b%n1==0)&&(b%n2==0))
        {
         printf("Lcm of %d and %d is %d",n1,n2,b);
         break;
        } 
      b++;  
    }
    return 0;   
       
}