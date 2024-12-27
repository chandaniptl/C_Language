#include <stdio.h>

int main() {
    int n = 5; 
    
    for (int i = 1; i <= n; i++) {
        printf("* ");
    }
    printf("\n");

    for (int i = 1; i <= n - 2; i++) {
        printf("*\n");
    }

    for (int i = 1; i <= n; i++) {
        printf("* ");
    }
    printf("\n");

    return 0;
}