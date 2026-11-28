
#include <stdio.h>

int main()
{
    int ch;
    int blank = 0, tab = 0, newline = 0;

    printf("Enter text:\n");

    while((ch = getchar()) != EOF)
    {
        if(ch == ' ')
        {
            blank++;
        }
        else if(ch == '\t')
        {
            tab++;
        }
        else if(ch == '\n')
        {
            newline++;
        }
    }

    printf("\nBlanks = %d", blank);
    printf("\nTabs = %d", tab);
    printf("\nNewlines = %d", newline);

    return 0;
}
