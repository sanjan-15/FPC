#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.of students\n");
    scanf("%d",&n);
    struct student
    {
        char name[20]; 
        int roll;
        int age;
        int sem;
    };
    struct student arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name, roll no., age and sem of student %d\n",i+1);
        scanf("%s%d%d%d",&arr[i].name,&arr[i].roll,&arr[i].age,&arr[i].sem);
    }
    printf("Entry is :\n");
    for(int i=0;i<n;i++)
        printf("%s %d %d %d\n",arr[i].name,arr[i].roll,arr[i].age,arr[i].sem);
    return 0;
}