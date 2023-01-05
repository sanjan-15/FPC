#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,b,a=1;
    float dec=0,k=0;
    printf("Enter a binary no.");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
       {
        j=i%10;
        dec=dec+j*pow(2,k); 
        k++; 
        } 
    printf("Binary no. in decimal form is %f",dec);
    return 0;     
}