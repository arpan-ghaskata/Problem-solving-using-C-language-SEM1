
#include <stdio.h>

float amount(float p, float r, int n)
{
    int i;
    float total = p;

    for(i = 1; i <= n; i++)
    {
        total = total * (1 + r);
    }

    return total;
}

int main()
{
    float p, r, total;
    int n;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest (in decimal): ");
    scanf("%f", &r);

    printf("Enter Number of Periods: ");
    scanf("%d", &n);

    total = amount(p, r, n);

    printf("Total Amount = %.2f", total);

    return 0;
}
