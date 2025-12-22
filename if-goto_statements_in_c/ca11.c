// Counting no.of numbers
#include <stdio.h>
int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
        goto end;
    }

start:
    if (n != 0)
    {
        n = n / 10;
        count++;
        goto start;
    }
    else
    {
        goto end;
    }

end:
    printf("Total digits = %d", count);
    return 0;
}
