#include <stdio.h>

int main()
{
    char string[100];
    int i, length = 0;

    printf("Enter string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    printf("Reverse of string: ");

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    return 0;
}