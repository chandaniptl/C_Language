#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter Your Score:");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                              : (score >= 70)   ? 'C'
                              : (score >= 60)   ? 'D'
                              : (score >= 50)   ? 'E': 'F';

    printf("Enter Your Grade:%c\n", grade);

    return 0;
}