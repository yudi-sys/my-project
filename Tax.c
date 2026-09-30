#include <stdio.h>
int main(void)
{
    double amount, tax;
    printf("Enter an amount:");
    scanf("%lf",&amount);
    tax = amount * 1.05;
    printf("with tax added:$%.2f",tax);
    return 0;
}