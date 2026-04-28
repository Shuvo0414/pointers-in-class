#include <stdio.h>
int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    printf("%d ", *(myNumbers+1));// second element of array
    printf("%d ", *(myNumbers+2));// third element of array
    return 0;
}