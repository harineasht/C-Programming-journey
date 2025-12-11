// 13.Swapping three-digit number
#include <stdio.h>
int main()
{
    int num, a, b, c, reverse;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;
    reverse = (c * 100) + (b * 10) + a;
    printf("Reverse of the number = %d\n", reverse);
    return 0;
}