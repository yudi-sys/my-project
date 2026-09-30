#include <stdio.h>
int main(void)
{
    double loan, rate, monthly_payment, monthly_rate;
    double bal1, bal2, bal3;
    printf("Enter amout of loan:");
    scanf("%lf",&loan);
    printf("Enter interest rate:");
    scanf("%lf",&rate);
    printf("Enter monthly payment:");
    scanf("%lf",&monthly_payment);
    monthly_rate = rate / 100.0 / 12.0;
    bal1 = loan * (1 + monthly_rate) - monthly_payment;
    bal2 = bal1 * (1 + monthly_rate) - monthly_payment;
    bal3 = bal2 * (1 + monthly_rate) - monthly_payment;
    printf("Balance remaining after first payment:$%.2f\n",bal1);
    printf("Balance remaining after second payment:$%.2f\n",bal2);
    printf("Balance remaining after third payment:$%.2f\n",bal3);
    return 0;
}