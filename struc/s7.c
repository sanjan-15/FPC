#include <stdio.h>
int main()
{
    int n=1;
    struct student
    {
        char name[20];
        int age;
    }s1,s2,s3,s4,s5;
    printf("Enter name, roll no., age and sem of student 1\n");
    scanf("%s%d",&s1.name,&s1.age);
    printf("Enter name, roll no., age and sem of student 2\n");
    scanf("%s%d",&s2.name,&s2.age);
    printf("Enter name, roll no., age and sem of student 3\n");
    scanf("%s%d",&s3.name,&s3.age);
    printf("Enter name, roll no., age and sem of student 4\n");
    scanf("%s%d",&s4.name,&s4.age);
    printf("Enter name, roll no., age and sem of student 5\n");
    scanf("%s%d",&s5.name,&s5.age);
    
    printf("Entry of roll no. 4 is :\n");
    printf("%s %d \n",s4.name,s4.age);
}    