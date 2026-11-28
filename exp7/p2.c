
#include <stdio.h>

void amount(float p, float r, int n)
{
    int i;
    float total = p;

    for(i = 1; i <= n; i++)
    {
        total = total * (1 + r);
    }

    printf("Total Amount = %.2f", total);
}

int main()
{
    float p, r;
    int n;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest (in decimal): ");
    scanf("%f", &r);

    printf("Enter Number of Periods: ");
    scanf("%d", &n);

    amount(p, r, n);

    return 0;
}
