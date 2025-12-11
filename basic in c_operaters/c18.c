// 18.Making one's of three-digit 2
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    result = (num / 10) * 10 + 2;
    printf("Number after making ones digit 2 = %d\n", result);
    return 0;
}