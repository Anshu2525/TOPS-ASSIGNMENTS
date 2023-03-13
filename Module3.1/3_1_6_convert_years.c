#include<stdio.h>
int main()
{
    int numofday,year,month,day;
    
    printf("Enter number of Days: ");
    scanf("%d",&numofday);

    year=numofday/365;
    month=(numofday-year*365)/30;
    day=(numofday-year*365-month*30);
    printf("Year=%d\n",year);
    printf("Month=%d\n",month);
    printf("Day=%d\n",day);
    return 0;
}