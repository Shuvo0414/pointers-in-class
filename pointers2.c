#include <stdio.h>

int main ()
{
    int var = 10;
    int *p;
    p = &var;

    printf("\nAddress of var: %u", (void*)&var);
    printf("\nAddress of var is : %u", (void*)p);
    printf("\nAddress of pointer p is: %u", (void*)&p);
    printf("\nAddress of pointer p is: %u", (void*)p);

    printf("\nValue of var: %d", var);
    printf("\n Address of var is: %d", *p);
    printf("\n Address of var is: %d", *(&var));

    return 0;
}