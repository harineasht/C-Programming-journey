
#include <stdio.h>
int main()
{
    int n, temp, first, digits = 0, pow10 = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

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

    if (first % 2 != 0)
    {
        first = first - 1;
    }

    result = first * pow10 + (n % pow10);

    printf("%d", result);
    return 0;
}
