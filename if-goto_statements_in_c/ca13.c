// Reversing the number
#include <stdio.h>
int main()
{
    int n, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        rev = 0;
        goto end;
    }

start:
    if (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
        goto start;
    }
    else
    {
        goto end;
    }

end:
    printf("Reverse = %d", rev);
    return 0;
}
