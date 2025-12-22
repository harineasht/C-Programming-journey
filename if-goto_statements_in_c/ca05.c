// Printing odd numbers from 1-9
#include <stdio.h>
int main()
{
    int i = 1;

start:
    if (i <= 9)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
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
