// 20.Making one's digit 2
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    result = (num / 10) * 10 + 2;
    printf("Result = %d\n", result);
    return 0;
}