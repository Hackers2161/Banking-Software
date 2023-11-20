#include <stdio.h>
#include <math.h>

// Function to calculate simple interest
float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

// Function to calculate compound interest
float compoundInterest(float principal, float rate, float time, int periods) {
    return principal * pow((1 + rate / periods), periods * time) - principal;
}

int main() {
    float principal, rate, time;
    int periods;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("For simple interest:\n");
    printf("Simple Interest = %.2f\n", simpleInterest(principal, rate, time));

    printf("For compound interest:\n");
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &periods);

    printf("Compound Interest = %.2f\n", compoundInterest(principal, rate / 100, time, periods));

    return 0;
}
