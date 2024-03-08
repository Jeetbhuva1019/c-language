#include<stdio.h>
main(){
    int a;
    printf("enter your age :");
    scanf("%d",&a);

    if (a<18)
    {
        printf("You cannot Vote");
    }else if (a==18)
    {
        printf("You can also vote.");
    }
    else{
        printf("You can vote.");
    }
}