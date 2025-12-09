// 8.Print one's digit(in a 3-digit number)
#include <stdio.h>
int main()
{
    int x;
    printf("Enter Number:");
    scanf("%d", &x);
    printf("%d", x % 10);
    return 0;
}
