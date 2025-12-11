#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    result = (num / 100) * 100 + (num % 10); // remove tens digit and keep others
    printf("Output = %d\n", result);
    return 0;
}