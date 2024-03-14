#include<stdio.h>
main(){

    int unit;
    float RS, total_Rs,additional_c;

    printf("Enter electricity units: ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        RS = unit * 0.50;
    }
    else if(unit <= 150)
    {
        RS = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        RS = 100 + ((unit-150) * 1.20);
    }
    else
    {
        RS = 220 + ((unit-250) * 1.50);
    }

   additional_c = RS * 0.20;
    total_Rs  = RS +additional_c;

    printf("Total Electricity Bill = Rs. %.2f", total_Rs);

}