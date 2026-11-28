
#include <stdio.h>

int main()
{
    int days, year, month, day;

    printf("Enter total days: ");
    scanf("%d", &days);

    year = days / 360;
    days = days % 360;

    month = days / 30;
    day = days % 30;

    printf("Years = %d\n", year);
    printf("Months = %d\n", month);
    printf("Days = %d", day);

    return 0;
}
