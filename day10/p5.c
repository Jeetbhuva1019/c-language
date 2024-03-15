#include<stdio.h>
main(){
    int a,b;
    printf("enter any number : ");
    scanf("%d",&a);
    printf("enter any number : ");
    scanf("%d",&b);
    while (a<=b)
    {
       if (a%4==0)
       {
        printf("%d\n",a);
       }
       a++;
    }
    
}