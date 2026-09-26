#include <stdio.h>
int main() {
    int people;
    float weight;
    printf("Enter number of people: ");
    scanf("%d", &people);
    printf("Enter total weight (kg): ");
    scanf("%f", &weight);

    if (weight > 1000 && people > 10)
        printf("Deny entry: Overweight AND People limit exceeded\n");
    else if (weight > 1000)
        printf("Deny entry: Overweight\n");
    else if (people > 10)
        printf("Deny entry: People limit exceeded\n");
    else
        printf("Elevator operating normally\n");
    return 0;
}
