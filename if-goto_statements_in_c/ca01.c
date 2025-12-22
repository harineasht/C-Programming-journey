// Printing from 1 to 5.
#include <stdio.h>
int main()
{
    int i = 1;

start:
    if (i <= 5)
    {
        printf("%d\n", i);
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