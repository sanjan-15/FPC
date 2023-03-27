#include<stdio.h>
void input_string(char str[])
{
    printf("Enter a string\n");
    scanf("%s",str);
}
int alpha_count(char str[])
{
    int i=0,al=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            al++;
        }
        i++;
    }
    return al;
}
int num_count(char str[])
{
    int i=0,digit=0;
    printf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        i++;
    }
    return digit;
}
int special_count(char str[])
{
    int i=0,splch=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            int alp=1;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            int digi=1;
        }
        else
        {
            splch++;
        }
    }
    return splch;
}
void output(char str[], int a_count, int n_count, int s_count)
{
    printf("Number of alphabets = %d, number of numbers = %d, number of special characters = %d",a_count,n_count,s_count);
}
int main()
{
    char str[100];
    int alp,num,sp;
    input_string(str);
    alp = alpha_count(str);
    num = num_count(str);
    sp = special_count(str);
    output(str,alp,num,sp);
    return 0;
}

