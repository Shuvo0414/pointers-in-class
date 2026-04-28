#include <stdio.h>
int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    int *ptr = myNumbers;
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}