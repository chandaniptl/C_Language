#include<stdio.h>

int main()
{
    int num=0, first=0, last=0, sum=0;

    printf("Enter Any Number:");
    scanf("%d", &num);

    last=num % 10;

    while (num > 10)
    {
       num=num / 10;
    }

    first=num;

    sum= first + last;

    printf("The Sum Of First Digit %d & Last Digit %d = %d", first,last,sum);

    return 0;
    
}