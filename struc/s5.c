#include <stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int roll;
        int age;
        int sem;
    }s1,s2,s3,s4;
    printf("Enter name, roll no., age and sem of student 1\n");
    scanf("%s%d%d%d",&s1.name,&s1.roll,&s1.age,&s1.sem);
    printf("Enter name, roll no., age and sem of student 2\n");
    scanf("%s%d%d%d",&s2.name,&s2.roll,&s2.age,&s2.sem);
    printf("Enter name, roll no., age and sem of student 3\n");
    scanf("%s%d%d%d",&s3.name,&s3.roll,&s3.age,&s3.sem);

    printf("Entry is :\n");
    printf("%s %d %d %d\n",s1.name,s1.roll,s1.age,s1.sem);
    printf("%s %d %d %d\n",s2.name,s2.roll,s2.age,s2.sem);
    printf("%s %d %d %d\n",s3.name,s3.roll,s3.age,s3.sem);
    return 0;
}