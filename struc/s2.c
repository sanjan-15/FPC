#include <stdio.h>
int main()
{
    struct student
    {
        char name[30];
        int age;
        int sem;
        float per;
        int phone;
    }s1,s2,s3;
    printf("Enter name, age, sem,percentage and phone of student 1\n");
    scanf("%s%d%d%f%d",&s1.name,&s1.age,&s1.sem,&s1.per,&s1.phone);
    printf("Enter name, age, sem,percentage and phone of student 2\n");
    scanf("%s%d%d%f%d",&s2.name,&s2.age,&s2.sem,&s2.per,&s2.phone);
    printf("Enter name, age, sem,percentage and phone of student 3\n");
    scanf("%s%d%d%f%d",&s3.name,&s3.age,&s3.sem,&s3.per,&s3.phone);

    printf("Ur entry is\n");
    printf("%s %d %d %.2f %d\n",s1.name,s1.age,s1.sem,s1.per,s1.phone);
    printf("%s %d %d %.2f %d\n",s2.name,s2.age,s2.sem,s2.per,s2.phone);
    printf("%s %d %d %.2f %d\n",s3.name,s3.age,s3.sem,s3.per,s3.phone);
}