// 14.Get 4 digit number and reverse last two number.
#include <stdio.h>
int main()
{
    int num, first2, last2, revLast2, finalNum;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    first2 = num / 100; // First two digits
    last2 = num % 100;  // Last two digits
    revLast2 = (last2 % 10) * 10 + (last2 / 10);
    finalNum = first2 * 100 + revLast2;
    printf("Final number = %d\n", finalNum);
    return 0;
}
