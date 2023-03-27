#include<stdio.h>
int main()
{
    typedef struct balance{
        int b;
        char name[20];
    }bal;
    int n,i;
    printf("Enter no. of accounts\n");
    scanf("%d",&n);
    bal s[n];
    for(i=0;i<n;i++)
       {
        printf("Enter the name of %d account:\n",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the balance in the accounts\n");
        scanf("%d",&s[i].b);
       }
    printf("Account owners having less than $200 in their accounts are:\n");
    for(i=0;i<n;i++)
       { 
        if(s[i].b<200)
          printf("%s\n",s[i].name);  
       }  
    printf("Account owners having more than $1000 in their accounts are:\n");   
    for(i=0;i<n;i++)
       {
        if(s[i].b>1000)
           {
           s[i].b+=100;
           printf("%d\n",s[i].b);  
           }
       }
        
}