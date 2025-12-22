// Printing from 5 to 1.
#include <stdio.h>
int main()
{
    int i = 5;

start:
    if (i >= 1)
    {
        printf("%d\n", i);
        i--;
        goto start;
    }
    else
    {
        goto end;
    }

end:
    return 0;
}