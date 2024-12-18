#include<stdio.h>

int main(){
    float S1, S2, S3, avg;

    printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%f", &S1);

     printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%f", &S2);

     printf("Enter marks for Subject 1 (out of 100): ");
    scanf("%f", &S3);

    avg=(S1+S2+S3)/3;

    printf("The average marks of the student are: %f\n", avg);

    return 0;
}