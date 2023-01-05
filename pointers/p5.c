#include<stdio.h>
#include<string.h>
void change(char *a,char*b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void permu(char *cha,int stn,int enn)
{
    int i;
    if(stn == enn)
      printf("%s  ",cha);
    else
    
        {
            for(i=stn;i<=enn;i++)
            {
                change((cha+stn),(cha+i));
                permu(cha,stn+1,enn);
                change((cha+stn),(cha+i));
            }
        }  
}
int main()
{
    char str[100];
    printf("enter word\n");
    scanf("%s",&str);
    int n = strlen(str);
    permu(str,0,n-1);
}