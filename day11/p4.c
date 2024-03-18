#include <stdio.h>
void main()
{

    int f = 0, s = 1, j, n;

    printf("enter any number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf(" %d", f);
        j = f + s;
        f = s;
        s = j;
    }
}