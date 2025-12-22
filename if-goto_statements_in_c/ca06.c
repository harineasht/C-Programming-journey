// Printing odd numbers from 1-9
#include <stdio.h>
int main()
{
    int i = 11;

start:
    if (i <= 19)
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
