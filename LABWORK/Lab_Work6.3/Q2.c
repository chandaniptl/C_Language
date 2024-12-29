#include<stdio.h>

int main()
{
    int N, i, factorial=1;
    printf("Enter a non-negative number:");
    scanf("%d", &N);

    if(N < 0)
    printf("Factorial is not defined for negative numbers.\n");
    else{
        for (i=1; i<=N; ++i)
        {
            factorial *= i;
        }
        printf("The Factorial of %d is %d\n", N, factorial);
        
    }
    return 0;
}