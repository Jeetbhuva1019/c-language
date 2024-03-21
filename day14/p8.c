#include <stdio.h>
void main()
{
    int c=1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%3d", c);
            c++;
        }

        printf(" \n");
    }
}