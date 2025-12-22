// Interchanging first and last digits
#include <stdio.h>
int main()
{
    int n, temp, first, last, digits = 0, pow10 = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

count:
    if (temp != 0)
    {
        digits++;
        temp = temp / 10;
        goto count;
    }

power:
    if (digits > 1)
    {
        pow10 = pow10 * 10;
        digits--;
        goto power;
    }

    first = n / pow10;

    result = last * pow10 + (n % pow10) / 10 * 10 + first;

    printf("%d", result);
    return 0;
}