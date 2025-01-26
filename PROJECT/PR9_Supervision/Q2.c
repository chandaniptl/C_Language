#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int math_marks;
    int phy_marks;
};

void calculate(struct Student s) {
    int total = s.chem_marks + s.math_marks + s.phy_marks;
    float percent = (total / 300.0) * 100;

    printf("\n%s (%d)\n", s.name, s.roll_no);
    printf("Chemistry = %d\n", s.chem_marks);
    printf("Mathematics = %d\n", s.math_marks);
    printf("Physics = %d\n", s.phy_marks);
    printf("Total = %d/300\n", total);
    printf("Percent = %.2f%%\n", percent);
}

int main() {
    struct Student students[5];


    for (int i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Chemistry marks: ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics marks: ");
        scanf("%d", &students[i].math_marks);
        printf("Physics marks: ");
        scanf("%d", &students[i].phy_marks);
    }

    printf("\nOutput:\n");
    for (int i = 0; i < 5; i++) {
        calculate(students[i]);
    }

    return 0;
}
