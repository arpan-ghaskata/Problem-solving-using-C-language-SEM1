#include <stdio.h>

int main()
{
    char str[10][100], temp[100];
    int n, i, j, k;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            k = 0;

            while (str[i][k] == str[j][k] && str[i][k] != '\0')
                k++;

            if (str[i][k] > str[j][k])
            {
                for (k = 0; k < 100; k++)
                {
                    temp[k] = str[i][k];
                    str[i][k] = str[j][k];
                    str[j][k] = temp[k];

                    if (temp[k] == '\0')
                        break;
                }
            }
        }
    }

    printf("Strings in alphabetical order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
