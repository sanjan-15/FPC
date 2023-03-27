#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    } b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter names, prices and no. of pages of 3 books\n");
        scanf("%s%f%d", &b[i].name, &b[i].price, &b[i].pages);
    }

    printf("What u entered is :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c %.2f %d\n", b[i].name, b[i].price, b[i].pages);
    }

    printf("\nEnter no. of books you want to buy:");
    int no;
    scanf("%d",&no);
    printf("\nEnter books you want to buy");
    int a[no],z[no];
    for (int i = 0; i < no; i++)
    {
        scanf("%d,%d",&a[i],&b[i]);
        for (int i = 0; i < 5; i++)
            {
                if ()
            }
    }
    return 0;
}