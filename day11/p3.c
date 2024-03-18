#include<stdio.h>

void main(){

    int n,i=2;
    printf("enter any number : ");
    scanf("%d",&n);

    do
    {
        printf("%d\n",i);
        i+=2;
    } while (i<=n);
    
}