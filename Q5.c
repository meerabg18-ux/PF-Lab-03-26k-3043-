#include <stdio.h>
int main() {
    float amount;
    int premium, inCity;
    printf("Enter order amount: ");
    scanf("%f", &amount);
    printf("Premium member? (1/0): ");
    scanf("%d", &premium);
    printf("Within city limits? (1/0): ");
    scanf("%d", &inCity);

    if (amount > 3000 || premium == 1)
        printf("Free Delivery\n");
    else
        printf("Delivery charges apply\n");

    if (amount < 50000 && inCity == 1)
        printf("COD Available\n");
    else
        printf("COD Not Available\n");
    return 0;
}
