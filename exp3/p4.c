
#include <stdio.h>

int main()
{
    int a, b, ch;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Addition = %d", a + b);
            break;

        case 2:
            printf("Subtraction = %d", a - b);
            break;

        case 3:
            printf("Multiplication = %d", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Division = %.2f", (float)a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
