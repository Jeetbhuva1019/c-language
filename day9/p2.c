#include <stdio.h>

int main() {
    float units,bill=0;

    printf("Enter electricity units : ");
    scanf("%f",&units);

    if (units <=50)
    {
        bill = units *.50;
    }
    else if(units <= 150)
    {
        bill = 50*.50;
        bill+=(units-50)* .75;
    }
    else if (units <=250)
    {
        bill = 50*.50;
        bill += 100*.75;
        bill +=(units-150)*1.2;
    }
    else
    {
        bill =50*.50;
        bill += 100*.75;
        bill += 100*1.2;
        bill +=(units-250)*1.5;
    }
    bill += bill * .20;
    printf("\nElectric Bill is: %.2f\n",bill);
    
    return 0;
    

}