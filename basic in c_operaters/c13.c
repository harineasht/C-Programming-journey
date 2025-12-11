// 12.Swap the numbers
#include <stdio.h>
int main()
{
    int num, tens, ones, reverse;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;
    ones = num % 10;
    reverse = (ones * 10) + tens;
    printf("Reversed number = %d\n", reverse);
    return 0;
}
