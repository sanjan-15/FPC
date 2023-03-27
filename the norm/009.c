#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int l=0;
    printf("Enter string\n");
    scanf("%[^\n]s",&a);
    for(int i=0;a[i]!='\0';i++)
       {
        l++;
       }
    printf("Length of string is %d\n",l);
    printf("Length of string is %d",strlen(a));
}