#include <stdio.h>

int main() {
    int first_phase, second_phase, third_phase;
    printf("Enter the first phase: ");
    scanf("%d", &first_phase);
    printf("Enter the second phase: ");
    scanf("%d", &second_phase);
    third_phase = 180 - (first_phase + second_phase);
    printf("The third phase is: %d", third_phase);
}
