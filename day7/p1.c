#include <stdio.h>
main()
{
    int a = 8,
        b = 3,
        c = 12;
    if (a < b)
    {
        if (a < c)
        {
            printf("A is Minimum");
        }
        else
        {
            printf("C is Minimum");
        }
    }
    else
    {
        if (b < c)
        {
            printf("B is Minimum");
        }
        else
        {
            printf("C is Minimum");
        }
    }
}