#include<stdio.h>
int main()
{
    float radius,area,length,breadth,base,hight;
   
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle= %f",area);
    printf("\nEnter length and breadth of a rectangle: ");
    scanf("%f %f",&length,&breadth);
    area=length*breadth;
    printf("Area of rectangle:%f",area);
    printf("\nEnter base and hight of triangal ");
    scanf("%f %f",&base,&hight);
    area = (1.0/2)*base*hight;
    printf("\nArea of triangal = %f",area);
    return 0;
}