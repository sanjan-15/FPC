#include <stdio.h>
int main() {
  int i;
  float sum = 0, avg;
  printf("The first 10 natural nos. are : ");
  for (i = 1; i <= 10; i++) {
    sum = sum + i;
    printf("%d ", i);
  }
  avg = sum/10;
  printf("Sum of first 10 numbers is %f\n", sum);
  printf("The average is %f",avg);
  return 0;
}  
