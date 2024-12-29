#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of terms: ");
    scanf("%d", &N);

    int a = 0, b = 1, next;

    if (N <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Fibonacci Series: ");
        
        if (N >= 1) {
            printf("%d ", a);
        }

        if (N >= 2) {
            printf("%d ", b);
        }

        for (int i = 3; i <= N; i++) {
            next = a + b; 
            printf("%d ", next);  
            a = b;  
            b = next;  
        }

        printf("\n");
    }

    return 0;
}
