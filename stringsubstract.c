#include <stdio.h>

int main()
{
    char str[100], sub[50];
    int i, j, found = 0;

    printf("Enter main string : ");
    scanf("%s", str);

    printf("Enter substring : ");
    scanf("%s", sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
        {
            printf("Substring found at index %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Substring not found");
    }

    return 0;
}