// 16.Making one's digit zero
#include <stdio.h>
int main()
{
    int num, tens, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    tens = num / 10;    // Extract tens digit
    result = tens * 10; // Make ones digit zero
    printf("Number with ones digit as zero = %d\n", result);
    return 0;
}
