#include <stdio.h>
struct date
{
    int day,month,yr,m,y,l;
};
typedef struct date date;  
int leap(date a)
{
    int k=a.yr;
    k++;
    if(k%100!=0 && k%4 == 0 || k%400 == 0)
      {
        a.l = 1;
        a.y=366;
      }  
    else
      {
        a.l = 0;
        a.y = 365;
      } 
    return a.y;
}
int main()  
{
    int i,j,n,yy,mm;
    date a,b[12];
    printf("Enter date(DD//MM//YYYY) :");
    scanf("%d%d%d",&a.day,&a.month,&a.yr);              
    printf("Enter days to b added");
    scanf("%d",&n);
    if(a.yr%100!=0 && a.yr%4 == 0 || a.yr%400 == 0)
      b[1].m = 29;
    else 
        b[1].m = 28;
    for(int i=0;i<12;i++)
       {
        if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
          b[i].m = 31;
        else if(i==3||i==5||i==8||i==10)
          b[i].m = 30;   
       }
    i = a.month;  
    while(i == a.month)
    {
        a.day+=n;
        while(a.day>b[i-1].m)
        {
            yy = leap(a);
            while(a.day>yy)
            {
                a.day-=yy;
                a.yr++;
                yy = leap(a);
            }
            a.month++;
            if(a.month>12)
              {
                a.month = 1;
                a.yr++;
              }
            a.day-=b[i-1].m;
            printf("%d %d \n",a.day,a.month); 
        }
        i++;
    }  
    printf("%d %d %d",a.day,a.month,a.yr);
}