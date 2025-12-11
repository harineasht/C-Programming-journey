// 21.Subtract 5 if ten's is odd
#include <stdio.h>
int main()
{
    int num, tens, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    tens = (num / 10) % 10;
    result = num - 5 * (tens % 2);
    printf("Result = %d\n", result);
    return 0;
}
