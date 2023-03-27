#include <stdio.h>

int main()
{

    int a,b;
    printf("Enter numerator:");
    scanf("%d",&a);
    printf("Enter denominator:");
    scanf("%d",&b);
    if(a==0)
       {
        printf("0");
       }
    else if(b==0)
       {
        printf("Infinity");
       }
    else
       {
         /*printf("%d\t\t%d\n",a,a);
         printf("-\t=\t-\n");
         printf("%d\t\t%d\n",b,b);*/
    
         if(a%b==0)
          {
             printf("%d\t\t%d\n",a,a/b);
             printf("-\t=\t-\n");
             printf("%d\t\t%d\n",b,b/b);
          }
        else if(a%b==0)
          {
             printf("%d\t\t%d\n",a,a/b);
             printf("-\t=\t-\n");
             printf("%d\t\t%d\n",b,b/b);
          }  

        
       }
}