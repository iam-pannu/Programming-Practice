#include <stdio.h>
#include <conio.h>

void main()
{
int i;
clrscr();
for(i = 1; i <=512; i = i + i)
{
printf("%d. Hello User\n", i);
}
}