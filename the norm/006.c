#include<stdio.h>
typedef struct Info{
    int roll,age;
    char name[20];
}info;
int input_n()
{
    int n;
    printf("Enter no. of students\n");
    scanf("%d",&n);
    return n;
}
void input(int n,info a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter name, roll no., and age of student %d\n",i+1);
        scanf("%s%d%d",&a[i].name,&a[i].roll,&a[i].age);
    }
}
void output(int n, info a[n])
{
    for(int i=0;i<n;i++)
        printf("%s %d %d\n",a[i].name,a[i].roll,a[i].age);
}
int main()
{
    int n;
    n = input_n();
    info a[n];
    input(n,a);
    output(n,a);
}