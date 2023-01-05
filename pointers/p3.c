#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the no. of elements\n ");
    scanf("%d",&n);
    int arr[n];
    printf("Input elemnets\n");
    for(i=0;i<n;i++)
       {
        printf("Element %d:",i+1);
        scanf("%d",arr+i);
       }
    printf("The elements are:\n");   
    for(i=0;i<n;i++)
       {
        printf("%d\n",*(arr+i));
       }   
    return 0;  
  }