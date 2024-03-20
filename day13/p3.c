#include <stdio.h>
int main()
{
    int a = 0, n, f = 0, l = 0;
    printf("enter the number :");
    scanf("%d", &n);

    l = n % 10;
    while (n >= 10)
    {
        /* code */
        n = n / 10;
    }
    f = n;
    a = f + l;
    printf("%d", a);
    return 0;
}