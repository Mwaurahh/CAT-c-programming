#include <stdio.h>

int main() {
    int hours, overTime;
    float wage, grossPay, tax, netPay, increment;

    printf("Enter hours worked in a week: ");
    scanf("%d", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    if (hours < 41) {
        grossPay = hours * wage;
    } else {
        overTime = (hours - 40);
        increment = overTime * (1.5 * wage);
        grossPay = (40 * wage) + increment;
    }

    if (grossPay < 601) {
        tax = grossPay * 0.15;
    } else {
        tax = grossPay * 0.20;
    }

    netPay = grossPay - tax;

    printf("Gross Pay: %.2f\n", grossPay);
    printf("Tax: %.2f\n", tax);
    printf("Net Pay: %.2f\n", netPay);

    return 0;
}