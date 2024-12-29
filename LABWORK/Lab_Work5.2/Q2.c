#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, max_number;

    printf("First Number is:");
    scanf("%d", &num1);

    printf("Second Number is:");
    scanf("%d", &num2);

    printf("Thired Number is:");
    scanf("%d", &num3);

    printf("Fourth Number is:");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                max_number = num1;
            }
            else
            {
                max_number = num4;
            }
        }
        else
        {
            if (num3 > num4)
            {
                max_number = num3;
            }
            else
            {
                max_number = num4;
            }
        }
    }
    else
    {
        if (num2 > num3)
        {
            if (num2 > num4)
            {
                max_number = num2;
            }
            else
            {
                max_number = num4;
            }
        }
        else
        {
            if (num3 > num4)
            {
                max_number = num3;
            }
            else
            {
                max_number = num4;
            }
        }
    }

    printf("Maximum Number Is:%d", max_number);
    return 0;
}