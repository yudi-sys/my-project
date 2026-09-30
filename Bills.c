#include <stdio.h>
int main(void)
{
    int dollar_amount, twenty, ten, five, one;

    printf("Enter a dollar amount:");
    scanf("%d",&dollar_amount);
    for (twenty = 0, dollar_amount; 20 <= dollar_amount; twenty++)
    {
        dollar_amount = dollar_amount - 20;
    }
    printf("$20 bills:%d\n", twenty);

    for (ten = 0; 10 <= dollar_amount; ten++)
    {
        dollar_amount = dollar_amount - 10;
    }
    printf("$10 bills:%d\n", ten);

    for (five = 0; 5 <= dollar_amount; five++)
    {
        dollar_amount = dollar_amount - 5;
    }
    printf("$5 bills:%d\n", five);

    for (one = 0; 1 <= dollar_amount; one++)
    {
        dollar_amount = dollar_amount - 1;
    }
    printf("$1 bills:%d\n", one);
    return 0;
}