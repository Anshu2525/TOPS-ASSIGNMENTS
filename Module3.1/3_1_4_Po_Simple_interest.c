#include <stdio.h>
int main()
{
    float principle,time,rate,SI;
    
    printf("Enter principle (amount): ");
    scanf("%f", &principle);
    printf("\nEnter time: ");
    scanf("%f", &time);
    printf("\nEnter rate: ");
    scanf("%f", &rate);
    SI = (principle * time * rate) / 100;
    printf("\nSimple Interest = %f", SI);
    return 0;
}