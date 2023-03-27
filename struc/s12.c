#include <stdio.h>
int main()
{
    int i;
    struct emp
    {
        char name[20];
        int sal,hrs;
    }s[10];
    for(i=0;i<=9;i++)
       {
        printf("Enter name of employee %d\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter salary and working hours of employee per day\n");
        scanf("%d%d",&s[i].sal,&s[i].hrs);
       }
    for(i=0;i<=9;i++)
       {
        if(s[i].hrs>=12)
          s[i].sal+=150;
        else if(s[i].hrs>=10)
               s[i].sal+=100;
        else if(s[i].hrs>=8)
               s[i].sal+=50;           
       }   
    for(i=0;i<=9;i++)
       {
        printf("%d.Name: %s\n  Salary: %d\n  Working hours: %d\n",i+1,s[i].name,s[i].sal,s[i].hrs);
       }   
}