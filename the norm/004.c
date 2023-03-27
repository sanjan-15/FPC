#include<stdio.h>
typedef struct Info{
    int roll,age;
    char name[20];
}info;
info input()
{
    info p;
    printf("Enter name of student\n");
    scanf("%s",p.name);
    printf("Enter age\n");
    scanf("%d",&p.age);
    printf("Enter roll no.\n");
    scanf("%d",&p.roll);
    return p;
}
void output(info a, info b)
{
    printf("Info of student 1 and student 2 are :\n");
    printf("Name   : %s   %s\n",a.name,b.name);
    printf("Age    : %d  \t %d\n",a.age,b.age);
    printf("Roll   : %d  \t %d\n",a.roll,b.roll);
}
int main()
{
    info a,b;
    printf("Student 1 :\n");
    a = input();
    printf("Student 2 :\n");
    b = input();
    output(a,b);
}