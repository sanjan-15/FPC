#include<stdio.h>
int main()
{
    int age;
    char mar,sex;
    printf("Enter 'y' if you are married and 'n' you are not");
    scanf("%c",&mar);
    if(mar=='y')
      printf("You are insured");
    else if(mar=='n')
      {printf("Enter 'm' if you are male and 'f' you are female ");
       scanf("%s",&sex);
       printf("Enter age");
       scanf("%d",&age);
       if(sex=='m'&&age>30)
         printf("You are insured");
       else if(sex=='f'&&age>25)
         printf("You are insured");
       else 
         printf("You are not insured");
     }  
}
