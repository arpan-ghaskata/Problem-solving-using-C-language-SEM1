#include <stdio.h>


  // Function declaration
void totalamount(float, float, int); 

int main()
{
    float p, r;
    int n;

    printf("Enter Principal amount: ");
    scanf("%f", &p);

    printf("Enter Rate of interest: ");
    scanf("%f", &r);

    printf("Enter Number of years: ");
    scanf("%d", &n);

    totalamount(p, r, n);                 // Function call

    return 0;
}

  // Function definition
void totalamount(float p, float r, int n)
{
    float total;
    int i;

    total = p;

    for(i = 1; i <= n; i++)
    {
        total = total * (1 + r);
    }

    printf("Total amount = %.2f", total);
}