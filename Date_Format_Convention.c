#include <stdio.h>
int main(void)
{
    int num1, num2, num3;
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&num1,&num2,&num3);
    printf("You entered the date %d%02d%02d",num3,num1,num2);
    return 0;
}
