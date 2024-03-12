#include <stdio.h>
main()
{
    int a;
    printf("enter the value :");
    scanf("%d", &a);

    if (a >= 90 && a <= 100)
    {
        printf("Your Marks is %d\n", a);
        printf("Your grade is A");
    }
    else if (a >= 80 && a < 90)
    {
        printf("Your Marks is %d\n", a);
        printf("Your grade is B");
    }
    else if (a >= 70 && a < 80)
    {
        printf("Your Marks is %d\n", a);
        printf("Your grade is C");
    }
    else if (a >= 60 && a < 70)
    {
        printf("Your Marks is %d\n", a);
        printf("Your grade is D");
    }
    else
    {
        printf("Your Marks is %d\n", a);
        printf("Your grade is E");
    }
}