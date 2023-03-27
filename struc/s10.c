#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter no. of students ");
    scanf("%d",&n);
    struct student
    {
        char name[25];
        int roll;
        float chem,math,phy;
        float p;
    }arr[n];
    for(i=0;i<n;i++)
       {
        printf("Enter name and roll no. of student %d\n",i+1);
        scanf("%s%d",&arr[i].name,&arr[i].roll);
        printf("Enter marks in chemistry, maths and physics\n");
        scanf("%f%f%f",&arr[i].chem,&arr[i].math,&arr[i].phy);
       } 
    for(i=0;i<n;i++)
       {
        arr[i].p = ((arr[i].chem +arr[i].math + arr[i].phy)/300)*100;
        printf("Percentage of student %d is %.2f\n",i+1,arr[i].p);
       }
    return 0;   
}