#include<stdio.h>
main(){
    int a;
    printf("enter the value :");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("%d is Even number",a);
    }else{
        printf("%d is Odd number",a);
    }
    
}