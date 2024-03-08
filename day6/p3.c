#include<stdio.h>
main(){
    int a;
    printf("enter the value :");
    scanf("%d",&a);

    if (a<0)
    {
        printf("This number is Negative");
    }else if (a==0)
    {
        printf("This number is Neutral");
    }
    else{
        printf("This number is Positive");
    }
    
    
}