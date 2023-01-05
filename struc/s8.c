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
        int marks[5];
    };
    struct student arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name, roll no., age and sem of student %d\n",i+1);
        scanf("%s%d%d%d",&arr[i].name,&arr[i].roll,&arr[i].age,&arr[i].sem);
        for(int j=0;j<5;j++)
        {
            printf("Enter marks of subject %d: ",j+1);
            scanf("%d",&arr[i].marks[j]);
        }
    }
    printf("Entry is :\n");
    for(int i=0;i<n;i++)
        {
            printf("%s %d %d %d\n",arr[i].name,arr[i].roll,arr[i].age,arr[i].sem);
            printf("Marks are : \n");
            for(int j=0;j<n;j++)
               {
                printf("%d ",arr[i].marks[j]); 
               } 
        }       
    return 0;
}