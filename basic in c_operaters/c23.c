// 23.Subtract 5 if both ones and 100's digit are add
#include <stdio.h>
int main()
{
    int num, h, o, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    h = num / 100;
    o = num % 10;
    result = num - 5 * ((h % 2) * (o % 2));
    printf("Result = %d\n", result);
    return 0;
}
