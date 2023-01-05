#include<stdio.h>
int main()
{
  float h,c,t;
  printf("Enter hardness of steel");
  scanf("%f",&h);
  printf("Enter carbon content");
  scanf("%f",&c);
  printf("Enter tensile strength");
  scanf("%f",&t);
  if(h>50&&c>0.7&&t>5600||h==50&&c==0.7&&t==5600)
    printf("Steel is grade 10");
  else if(h>50&&c>0.7)
    printf("Steel is grade 9");
  else if(c>0.7&&t>5600)
    printf("Steel is grade 8");
  else if(h>50&&t>5600)
    printf("Steel is grade 7");
  else if(h>50||c>0.7||t>5600)
    printf("steel is grade 6");
  else
    printf("Steel is grade 5");
  return 0;
}