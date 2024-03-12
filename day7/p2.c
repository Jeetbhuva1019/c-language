#include<stdio.h>
main(){
    int a=8,
    b=3,
    c=12,
    d=7;

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("A is Max");
            }else
            {
                printf("D is Max");
            }
        }else
        {
            printf("C ia Max");
        }
        
    }else
    {
        if (b>c)
        {
            if (b>d)
            {
                printf("B is Max");
            }else
            {
                printf("D is Max");
            }
        }else
        {
            printf("C ia Max");
        }
    }
    
    
}