#include<stdio.h>
#include<math.h>
struct tv
{
  char name[20],actor[20];
  int rank,age;
};
typedef struct tv TV;
TV input()
{
 TV a;
 printf("Enter name of series\n");
 scanf("%s",&a.name);
 printf("Enter fav actor\n");
 scanf("%s",&a.actor);
 printf("Enter ranking\n");
 scanf("%d",&a.rank);
 printf("enter restricted age\n");
 scanf("%d",&a.age);
 return a;
}
void callMe(TV *c)
{
  printf("%s\n",(*c).name);
  printf("%s\n",c->actor);
  printf("%d\n",(*c).rank);
  printf("%d\n",c->age);
}
int main()
{
 TV i;
 i = input();
 callMe(&i);
}