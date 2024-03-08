#include<stdio.h>
main(){
    int a;
    printf("enter the Year :");
    scanf("%d",&a);

    if (a%4==0)
    {
        printf("%d is a leap year",a);
    }else{
        printf("%d is not leap year",a);
    }
    
}