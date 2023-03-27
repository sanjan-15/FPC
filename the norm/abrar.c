#include <stdio.h>
#define L 2
int main()
{
    struct 
    {
        int roll;
        char name[30];
        int age;
    }s[L];
    for (int i=1; i<=L; i++)
    {
        printf("\nEnter name of Student %d: ",i);
        scanf("%s",&s[i].name);
        printf("Enter age of Student %d: ",i);
        scanf("%d",&s[i].age);
    }
    for (int i=0; i<=L; i++)
    {
    printf("\n%d-   %d\n",i,s[i].age);
    }
}