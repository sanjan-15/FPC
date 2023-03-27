#include <stdio.h>
void add(int a,int n1[a],int n2[a],int n3[a]);
int main()
{
    int a,i,l=1;
    printf("Enter no. of times you want to add");
    scanf("%d",&a);
    int n1[a],n2[a],n3[a];
    for(i=0;i<a;i++)
       {
        printf("Enter number %d of array 1\n",l);
        scanf("%d",&n1[i]);
        printf("Enter number %d of array 2\n",l);
        scanf("%d",&n2[i]);
       }
     
    add(a,n1,n2,n3);
    printf("New array is:");
    for(i=0;i<a;i++)
        { 
         printf("New array sum %d :%d\n",l++,n3[i]);
        }  
}
void add(int a,int n1[a],int n2[a],int n3[a])
{
    int i,l=1;
    for(i=0;i<a;i++)
       {
          for(i=0;i<a;i++)
             {
                n3[i]=n1[i]+n2[i];
             }
       } 
}
