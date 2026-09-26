#include <stdio.h>
int main() {
    int zone, speed, limit;
    float fine = 1000;
    printf("Enter zone (1=School,2=Highway,3=Residential): ");
    scanf("%d", &zone);
    printf("Enter driver's speed: ");
    scanf("%d", &speed);

    switch (zone) {
        case 1: limit = 30; break;
        case 2: limit = 100; break;
        case 3: limit = 50; break;
        default:
            printf("Invalid zone\n");
            return 0;
    }

    if (speed > limit) {
        if (speed - limit > 20)
            fine *= 2;
        printf("Fine: Rs. %.2f\n", fine);
    } else {
        printf("No violation\n");
    }
    return 0;
}
