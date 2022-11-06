#include <stdio.h>
#define divide(number) (number % 10 == 0)
int isDivisible();
int main()
{
    isDivisible();
    return 0;
}

int isDivisible()
{
    int number = 0;
    printf("Enter Number : ");
    scanf("%d", &number);
    divide(number);
    if (divide(number) == 1)
    {
        printf("%d is divisible by 10", number);
    }
    else
    {
        printf("%d is not divisible by 10", number);
    }
    return 0;
}