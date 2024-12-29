#include <stdio.h>

int main() {
    int N;

    printf("Enter a number N: ");
    scanf("%d", &N);

    int i = 2;

    do {
        printf("%d\n", i);  
        i += 2;             
    } while(i <= N);       
    return 0;
}
