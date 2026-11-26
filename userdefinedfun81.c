#include<stdio.h>

void printline();    //function declaration

int main()
{
    printline();    //function call
    return 0;
}

void printline()    //function definition
{
   int i;
    for(i=0;i<81;i++)
    {
        printf("-");
    }
}
