#include <stdio.h>

int main() {
    int rows = 6; 

    for (int i = 0; i < rows; i++) {

        for (int j = 1; j < rows - i; j++) {

            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}