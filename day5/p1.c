#include<stdio.h>
main(){
    float a,b,c;
    printf("enter the value : ");
    scanf("%f",&a);
    printf("enter the discount : ");
    scanf("%f",&b);

    c=a*(b/100);
    printf("ans : %.2f",c);
}