#include<stdio.h>
#include<conio.h>
int main()
{
    float radius, area, PI=3.14159;

    printf("Enter the radius of the circle:");
    scanf("%f", &radius);

    area=PI*radius*radius;

    printf("The area of the circle with radius %2.f is: %.2f\n",radius,area);

    return 0;
}