// INTEREST CALCULATION
#include <stSIMPLE dio.h>

float calculate_simple_interest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    float principal;
    float rate; 
    float time;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the interest rate: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    float simple_interest = calculate_simple_interest(principal, rate, time);
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}