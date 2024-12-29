#include<stdio.h>
int main()
{
    float X,Y, result;
    printf("Enter value of X:");
    scanf("%f",&X);

    printf("Enter value of Y:");
    scanf("%f",&Y);

    result=(X+Y)*(X+Y)*(X+Y);

    printf("Result:%.2f\n",result);

    return 0;

}