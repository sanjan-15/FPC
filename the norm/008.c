#include<stdio.h>
#include <stdio.h>

void main()
{
    int arr1[10];
    int i, j, tmp;

    printf("Input 10 elements in the array :\n");
       for(i=0;i<10;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<10; i++)
    {
        printf("%d  ", arr1[i]);
    }
}