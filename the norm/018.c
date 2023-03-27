#include<stdio.h>
typedef struct balance{
        int b;
        char name[20];
    }bal;
int input_n()
{
    int n;
    printf("Enter no. of accounts\n");
    scanf("%d",&n);
    return n;
}
bal input(int i)
{
    bal s;
    printf("Enter the name of %d account:\n",i+1);
    scanf("%s",&s.name);
    printf("Enter the balance in the accounts\n");
    scanf("%d",&s.b);
    return s;   
}
void less(int n,bal s[n])
{
    for(int i=0;i<n;i++)
       { 
        if(s[i].b<200)
          printf("%s\n",s[i].name);  
       }  
}
void more(int n,bal s[n])
{   
    for(int i=0;i<n;i++)
       {
        if(s[i].b>1000)
           {
           s[i].b+=100;
           printf("%d\n",s[i].b);  
           }
       }
}
int main()
{
    int n = input_n();
    bal s[n];
    for(int i=0;i<n;i++)
       {
        s[i]=input(i);
       }
    printf("Account owners having less than $200 in their accounts are:\n");
    less(n,s);
    printf("Account owners having more than $1000 in their accounts are:\n");
    more(n,s);
}