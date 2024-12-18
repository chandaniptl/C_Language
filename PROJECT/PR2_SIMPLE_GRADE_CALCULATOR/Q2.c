#include <stdio.h>

int main() {
    int score;
    char grade;

    // Input score from the user
    printf("Enter your score: ");
    scanf("%d", &score);

    // Determine the grade based on the score
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output the grade
    printf("Your grade is %c. ", grade);

    // Provide additional comments based on the grade using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

    return 0;
}