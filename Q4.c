#include <stdio.h>
int main() {
    int passed, credits;
    float gpa;
    printf("Passed Programming Fundamentals? (1/0): ");
    scanf("%d", &passed);
    printf("Enter grade point: ");
    scanf("%f", &gpa);
    printf("Enter completed credit hours: ");
    scanf("%d", &credits);

    if (passed == 1 && gpa >= 2.5 && credits >= 30)
        printf("Eligible to register for Advanced Programming\n");
    else
        printf("Not eligible to register\n");
    return 0;
}
