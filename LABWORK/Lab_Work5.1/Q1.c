#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter Number1:");
    scanf("%d", &num1);

    printf("Enter Number2:");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("num 1 is big");
    }
    else
    {
        printf("num 2 is small");
    }
    return 0;
}