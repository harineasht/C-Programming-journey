// Sum of two digit numbers whose ten's digit is 7
#include <stdio.h>
int main()
{
    int i = 70, sum = 0;

start:
    if (i <= 79)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        i++;
        goto start;
    }
    else
    {
        goto end;
    }

end:
    printf("%d", sum);
    return 0;
}
