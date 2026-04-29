#include <stdio.h>
int main ()
{
    int i, classes[6], sum = 0;
    printf("Enter 6 numbrs: \n");
    for (int i = 0; i < 6; i++)
    {
        
        scanf("%d", (classes + i));
        sum+= *(classes + i);
    }
    printf("sum = %d ", sum);

    return 0;
}