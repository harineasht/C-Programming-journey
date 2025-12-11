// 19.Subtract 5 if even else print same
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num - 5 * (num % 2); // subtract 5 only if num is odd
    printf("Result = %d\n", result);
    return 0;
}
