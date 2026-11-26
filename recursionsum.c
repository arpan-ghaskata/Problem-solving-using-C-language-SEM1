#include <stdio.h>

int sumDigits(int);  // Declaration

int main()
{
    int n, ans;

    printf("Enter number: ");
    scanf("%d", &n);

    ans = sumDigits(n);  // Function call

    printf("Sum of digits = %d", ans);

    return 0;
}

int sumDigits(int n)  // Definition
{
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}