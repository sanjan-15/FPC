#include <stdio.h>
int sum(int n[10],int q[10],int t);
int dis(int n[10],int q[10],int t);
void output(int n[10],int q[10],int t);
int main()
{
    int i,n[10],q[10],j,t,sum_bill,discount;
    printf("How many items are there?" );
    scanf("%d",&t);
    for(i=0;i<t;i++)
       { 
         printf("Enter item price ");
         scanf("%d",&n[i]);
         printf("Enter quantity of item ");
         scanf("%d",&q[i]);
       }
    sum(n,q,t);   
    output(n,q,t);
}
int sum(int n[10],int q[10],int t)
{
    int sum_bill=0,i;
    for(i=0;i<t;i++)
       {
          sum_bill += n[i]*q[i]; 
       }
    return sum_bill;   
}
int dis(int n[10],int q[10],int t)
{
    int discount,sum_bill,grand_total;
    sum_bill = sum(n,q,t);
    if(sum_bill<1000)
        discount = 5;
    else if(sum_bill>5000)
             discount = 15;
    else 
       discount = 10; 
    return discount;           
}
void output(int n[10],int q[10],int t)
{
    int discount,j,i=1,sum_bill,grand_total,disc;
    sum_bill = sum(n,q,t);
    discount = dis(n,q,t);
    grand_total = sum_bill - (sum_bill*discount/100);
    disc = sum_bill-grand_total;
    printf("%d percent is the dicount on the bill\n",discount);
    printf("Item  \t\tPrice\t\tQuantity\t\tSubtoatl\n");
    for(int j=0;j<t;j++)
       {
          printf("Item %d\t\t%d\t\t%d\t\t\t%d\n",i,n[j],q[j],n[j]*q[j]);
          i++;
       }
    printf("TOTAL\t\t\t\t\t\t\t%d\nDiscount  %d\t\t\t\t\t\t-%d\n",sum_bill,discount,disc);   
    printf("Grand Total \t\t\t\t\t\t%d",grand_total); 
}