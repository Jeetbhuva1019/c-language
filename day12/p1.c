#include<stdio.h>
void main(){

    int sum=0,n;

    printf("enter any number : ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
        printf("The sum of all numbers : %d\n",sum);
    
}