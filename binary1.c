#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,j,k,a;
    printf("Enter no. in decimal form");
    scanf("%d",&n);
    printf("Number in binary form is  ");
    while(n>0){
        i=n%2;
        printf("%d",i);
        n=n/2;
    }
    return 0;

}
