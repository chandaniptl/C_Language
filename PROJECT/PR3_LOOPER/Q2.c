#include <stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter a Number:");
    scanf("%d", &number);

    number = (number < 0) ? -number : number;

    do
    {
        count++;
        number /= 10;
    } while (number > 0);

    printf("Total Number Of Digits:%d\n", count);

    return 0;
}