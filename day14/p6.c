#include <stdio.h>

void main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%2d", j%2);
        }
        printf("\n");
    }
}