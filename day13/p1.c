#include <stdio.h>

void main()
{

    char alpha = 'a';

    do
    {
        printf("%c\n", alpha);
        alpha += 4;
    } while (alpha <= 'z');
}