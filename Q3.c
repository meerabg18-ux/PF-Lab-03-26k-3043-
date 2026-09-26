#include <stdio.h>
int main() {
    float amount;
    int outside;
    printf("Enter transaction amount: ");
    scanf("%f", &amount);
    printf("Outside home city? (1=yes,0=no): ");
    scanf("%d", &outside);

    if (amount > 500000 || (amount > 100000 && outside == 1))
        printf("Flagged for Review\n");
    else
        printf("Approved\n");
    return 0;
}
