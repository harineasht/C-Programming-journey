// Printing from 1 to 5.
#include <stdio.h>
int main()
{
    int sum = 0, i = 1;

start:
    if (i <= 5)
    {

        sum += i;
        i++;
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