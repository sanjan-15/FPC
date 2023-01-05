#include<stdio.h>
int main()
{
    float i,n,sum=0;
    char o;
    printf("Enter operation u want to use \n1.'+'\n2.'-'\n3.'*'\n4.'/'");
    scanf("%s",&o);
    printf("Enter first no.");
    scanf("%f",&n);
    sum=sum+n;
    do{
         if(o=='+')
         {
            do {
               printf("Enter no");
               scanf("%f",&n);
               sum+=n;
               scanf("%s",&o);
            } while(o =='+');
         }
         else if(o=='-')
         { 
            do{
               printf("Enter no.");
               scanf("%f",&n);
               sum=sum-n;
               scanf("%s",&o);    
            }while(o =='-');
         } 
         else if(o=='*')
         {
            do{
               printf("Enter no.");
               scanf("%f",&n);
               sum=sum*n;
               scanf("%s",&o);
            }while(o=='*');
         }
         else if(o=='/')
         {
            do{
               printf("Enter no.");
               scanf("%f",&n);
               sum=sum/n;
               scanf("%s",&o);
            }while(o=='/');
         }
      }while(o !='=');   
    printf("Sum is %f",sum);
    return 0;   
}