// Printing even numbers with sum 6
#include <stdio.h>
int main()
{
    int i = 10, a, b;

start:
    if (i <= 99)
    {
        if (i % 2 == 0)
        {
            a = i / 10;
            b = i % 10;

            if (a + b == 6)
            {
                printf("%d\n", i);
            }
        }
        i++;
        goto start;
    }
    else
    {
        goto end;
    }

end:
    return 0;
}