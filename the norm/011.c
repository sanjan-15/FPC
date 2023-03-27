#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int l=0;
    printf("Enter string 1\n");
    scanf("%[^\n]s",a);
    printf("Enter string 2\n");
    scanf("%s",b);
    strcat(a,b);
    printf("%s is the concatenated string",a);   
}