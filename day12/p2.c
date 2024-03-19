#include<stdio.h>
void main(){
    int n,s=1;

    printf("Enter any number : ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        s*=i;
    }
    printf("The factorial is : %d",s);
    
}