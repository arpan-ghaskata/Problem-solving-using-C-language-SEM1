
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    if(marks > 80)
    {
        printf("Grade A");
    }
    else if(marks >= 61)
    {
        printf("Grade B");
    }
    else if(marks >= 51)
    {
        printf("Grade C");
    }
    else if(marks >= 41)
    {
        printf("Grade D");
    }
    else if(marks >= 35)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
