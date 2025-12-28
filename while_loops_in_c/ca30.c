// Program to find HCF of two numbers using while loop
#include <stdio.h>

int main()
{
    int a, b, hcf;

    scanf("%d %d", &a, &b);

    hcf = (a < b) ? a : b;

    while (hcf >= 1)
    {
        if (a % hcf == 0 && b % hcf == 0)
        {
            printf("%d", hcf);
            break;
        }
        hcf--;
    }

    return 0;
}
