// 10.Printing ten's digit.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a three-digit number: ");
    scanf("%d", &a);
    b = (a / 10) % 10;
    printf("The tens digit is: %d\n", b);
    return 0;
}
