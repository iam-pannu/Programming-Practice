#include <stdio.h>
#include <conio.h>

void main()
{
    int i;

    clrscr();

    for (i = 10; i >= 1; i--)
    {
        printf("%d. Hello User\n", i);
    }
    getch();
}
