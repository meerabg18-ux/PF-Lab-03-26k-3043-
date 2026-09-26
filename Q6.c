#include <stdio.h>
int main() {
    float temp, pressure;
    printf("Enter temperature (C): ");
    scanf("%f", &temp);
    printf("Enter pressure (PSI): ");
    scanf("%f", &pressure);

    if (temp > 100 || pressure > 250)
        printf("Status: SHUTDOWN\n");
    else if (temp >= 85 && temp <= 100 && pressure >= 200 && pressure <= 250)
        printf("Status: Warning Mode\n");
    else
        printf("Status: Normal Operation\n");
    return 0;
}
