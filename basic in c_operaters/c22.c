// 22.Subtract 5 if sum of digits is odd
#include <stdio.h>
int main()
{
    int num, a, b, sum, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    a = num / 10; // tens digit
    b = num % 10; // ones digit
    sum = a + b;
    result = num - 5 * (sum % 2); // subtract 5 only if sum is odd
    printf("Result = %d\n", result);
    return 0;
}
