
#include <stdio.h>

int main()
{
    int sec, hour, min, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &sec);

    hour = sec / 3600;
    sec = sec % 3600;

    min = sec / 60;
    seconds = sec % 60;

    printf("Hours = %d\n", hour);
    printf("Minutes = %d\n", min);
    printf("Seconds = %d", seconds);

    return 0;
}
