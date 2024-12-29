#include<stdio.h>
int main()
{
    double X, Y, result;

    printf("Enter the value of X:");
    scanf("%lf", &X);

    printf("Enter the value of Y:");
    scanf("%lf", &Y);

    result=(X*X)-(2*X*Y)+(Y*Y);

    printf("Result:%.2lf\n",result);

    return 0;
}