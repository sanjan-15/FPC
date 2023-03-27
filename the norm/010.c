#include<stdio.h>
int main()
{
    char a[20],b[20];
    int l=0;
    printf("Enter string 1\n");
    scanf("%[^\n]s",a);
    printf("Enter string 2\n");
    scanf("%s",b);
    for(int i=0;a[i]!='\0';i++)
       {
        l++;
       }
    for(int i=0;b[i]!='\0';i++)
       {
        a[i+l]=b[i];
       }
    printf("%s is the concatenated string",a);   
}