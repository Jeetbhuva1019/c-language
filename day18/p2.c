#include<stdio.h>
void main(){

    for (int i = 5; i >=1; i--)
    {
        for (int k = 4; k >=i; k--)
        {
            printf(" ");
        }
        
        for (int j = 4; j >=1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}