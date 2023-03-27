#include <stdio.h>
    int main()
    {
        int num1 = 10, num2 = 5, num3 = 3;
        num2 = !num1;
        num3 = !!num1;
        printf("%d\t%d", num2, num3);
    }