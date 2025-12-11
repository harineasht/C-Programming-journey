// 17.Making ten's digit 1
#include <stdio.h>
int main()
{
    int num, ones, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    ones = num % 10;
    result = 10 + ones;
    printf("Number after making tens digit 1 = %d\n", result);
    return 0;
}