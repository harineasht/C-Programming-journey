// Printing sum from 6 to 1.
#include <stdio.h>
int main()
{
    int sum = 0, i = 6;

start:
    if (i >= 1)
    {
        sum += i;
        // printf("%d", i);
        i--;
        goto start;
    }
    else
    {
        goto end;
    }

end:
    printf("%d\n", sum);
    return 0;
}