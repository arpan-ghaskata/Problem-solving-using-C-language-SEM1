
#include <stdio.h>

int main()
{
    int a[100], n, i, pos, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("Enter index to insert: ");
    scanf("%d", &pos);

    printf("Enter new element: ");
    scanf("%d", &num);

    if(pos < 0 || pos > n || n >= 100)
    {
        printf("Invalid position");
    }
    else
    {
        for(i = n; i > pos; i--)
        {
            a[i] = a[i-1];
        }

        a[pos] = num;
        n++;

        printf("Array after insertion:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
