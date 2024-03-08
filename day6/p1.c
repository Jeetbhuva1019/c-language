#include<stdio.h>
main(){
    int a,b;
    printf("enter the value : ");
    scanf("%d",&a);
    
    printf("enter the value : ");
    scanf("%d",&b);

    if (a<b)
    {
        printf("The minimum value is : %d",a);
    }else{
        printf("The minimum value is: %d",b);
    }
    
    
}