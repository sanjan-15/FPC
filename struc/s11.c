#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter no. of students ");
    scanf("%d",&n);
    struct stu
    {
        char name[20],adrs[100];
        int roll,age;
    }arr[n];
    for(i=0;i<n;i++)
       {
        printf("Enter name of student %d\n",i+1);
        scanf("%s",&arr[i].name);
        printf("Enter roll no. and age of student %d\n",i+1);
        scanf("%d%d",&arr[i].roll,&arr[i].age);
        printf("Enter address of student %d\n",i+1);
        scanf("%s",arr[i].adrs);
       }
    printf("Students with age = 14 are:\n");   
    for(i=0;i<n;i++)
       {
        if(arr[i].age == 14)
          {
            printf("%s\n",arr[i].name);
          }
       }
    printf("Students having even roll nos. are:\n");
    for(i=0;i<n;i++)
       {
        if(arr[i].roll%2==0)
          {
            printf("%s\n",arr[i].name);
          }
       }
    printf("Details of all students are:\n");
    for(i=0;i<n;i++)
       {
        printf("%d.Name: %s\n%d.Roll no.: %d\n%d.Age: %d\n%d.Address: %s\n",i+1,arr[i].name,i+1,arr[i].roll,i+1,arr[i].age,i+1,arr[i].adrs);
       }
}