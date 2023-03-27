#include <stdio.h>
int main()
{
    int i;
    struct date
    {
        int day,month,yr,m;
    }a,b[12];
    printf("Enter date(DD//MM//YYYY) :");
    scanf("%d%d%d",&a.day,&a.month,&a.yr);
    if(a.yr%100!=0 && a.yr%4 == 0 || a.yr%400 == 0)
      b[1].m = 29;
    else 
      b[1].m = 28;   
    for(i=0;i<12;i++)
       {
        if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
          b[i].m = 31;
        else if(i==3||i==5||i==8||i==10)
          b[i].m = 30;   
       }  
    i = a.month;   
    while(i == a.month)
    {
        a.day+=45;
        if(a.day>a.month)
          a.day -= b[i-1].m;
          if(a.day>(a.month+1))
            a.day -= b[i].m;
            a.month++; 
          a.month++; 
          if(a.month>12)
             {
                a.month-=12;
                a.yr++;
             }          
        i++;
    }  
    printf("%d %d %d",a.day,a.month,a.yr);
}