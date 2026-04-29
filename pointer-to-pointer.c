#include <stdio.h>
int main()
{
    int number = 50;
    int *p;
    int **p2;

    p = &number;
    p2 = &p;

    printf("Address of number: %p\n", (void *)&number);
    printf("Value of p (address of number): %p\n", (void *)p);
    printf("Value at *p: %d\n", *p);

    printf("Value of p2 (address of p): %p\n", (void *)p2);
    printf("Value at **p2: %d\n", **p2);

    return 0;
}