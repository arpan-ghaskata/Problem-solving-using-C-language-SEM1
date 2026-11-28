
#include <stdio.h>

int main()
{
    int a[100], n, i, min, max;
    int minpos, maxpos, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];
    minpos = 0;
    maxpos = 0;

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            minpos = i;
        }

        if(a[i] > max)
        {
            max = a[i];
            maxpos = i;
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    temp = a[minpos];
    a[minpos] = a[maxpos];
    a[maxpos] = temp;

    printf("Array after swapping:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
