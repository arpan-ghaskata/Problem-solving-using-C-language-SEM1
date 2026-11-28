#include <stdio.h>

int main()
{
    char str[100], sub[100];
    int i, j, flag = 0;

    printf("Enter main string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; sub[j] != '\0'; j++)
        {
            if (str[i + j] != sub[j])
                break;
        }

        if (sub[j] == '\0')
        {
            flag = 1;
            printf("Substring found at index: %d", i);
            break;
        }
    }

    if (flag == 0)
        printf("Substring not found");

    return 0;
}
