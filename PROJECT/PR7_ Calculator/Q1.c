#include <stdio.h>
#include <stdlib.h>

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void modulo(int a, int b);

int main() {
    int choice;
    int num1, num2;

    do {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exit. Goodbye!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                modulo(num1, num2);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (1);

    return 0;
}

void add(int a, int b) {
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("Division of %d by %d is %.2f\n", a, b, (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed!\n");
    }
}

void modulo(int a, int b) {
    if (b != 0) {
        printf("Modulo of %d and %d is %d\n", a, b, a % b);
    } else {
        printf("Error: Modulo by zero is not allowed!\n");
    }
}
