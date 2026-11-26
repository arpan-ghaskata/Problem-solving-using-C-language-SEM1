#include <stdio.h>

void sort(int[], int);

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
          scanf("%d", &a[i]);
        }
    sort(a, n);

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
      {  
        printf("%d ", a[i]);
    }
    return 0;
}
void sort(int a[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}