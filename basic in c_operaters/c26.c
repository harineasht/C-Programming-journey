#include <stdio.h>
int main()
{
    int num, thousands, hundreds, tens, ones, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    thousands = num / 1000;
    hundreds = (num / 100) % 10;
    tens = (num / 10) % 10;
    ones = num % 10;
    result = thousands * 1000 + hundreds * 100 + ones * 10 + tens;
    printf("Output = %d\n", result);
    return 0;
}
