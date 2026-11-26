#include<stdio.h>
                                                                //function declarations
float addition(float , float);
float subtraction(float , float);
float multiplication(float , float);
float division(float , float);
                                                                //function call
int main()
{
    float a,b;
    printf("Enter one number: ");
    scanf("%f",&a);
    printf("Enter another number: ");
    scanf("%f",&b);

    printf("Addition: %.2f\n",addition(a,b));
    printf("Subtraction: %.2f\n",subtraction(a,b));
    printf("Multiplication: %.2f\n",multiplication(a,b));

    if(b!=0)
    {
        printf("Division: %.2f\n",division(a,b));
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

                                                                //function definitions
float addition(float a , float b)
{
    return a + b;
}
float subtraction(float a , float b)
{
    return a - b;
}
float multiplication(float a , float b)
{
    return a * b;
}
float division(float a , float b)
{
    return a / b;
}
