#include <stdio.h>
main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= 5 - i; k--)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}