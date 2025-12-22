// sum of each digit
#include <stdio.h>
int main()
{
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        sum = 0;
        goto end;
    }

start:
    if (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
        goto start;
    }
    else
    {
        goto end;
    }

end:
    printf("Sum of digits = %d", sum);
    return 0;
}
