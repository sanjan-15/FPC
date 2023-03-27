#include <stdio.h>
int input();
int largest_no(int a, int b, int c);
void output(int largest);
int main() {
  int a,b,c,largest; 
  input(a,b,c);
}
int input(int a,int b,int c)
{   
  printf("Enter three nos.");
  scanf("%d%d%d",&a, &b, &c); 
  largest_no(a,b,c);
}
int largest_no(int a, int b, int c) {
  int largest;  
  if (a > b && a > c)
    largest = a;
  else if (b > a && b > c)
    largest = b;
  else if (c > a && c > b)
    largest = c;
  else if ((c==a&&a==b)||(c==a&&a>b))
     largest = a;
  else if ((c==b&&b>a)||(b==a&&a>c))
    largest = b;     
  output(largest);
}
void output(int largest) {
  printf("Largest no. is %d",largest);
}