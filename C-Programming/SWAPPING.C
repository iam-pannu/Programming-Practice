#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,s;
clrscr();

printf("Enter 2 Numbers: ");
scanf("%d%d", &a, &b);

printf("\nBefore Swapping a = %d, b = %d", a, b);

s=a;
a=b;
b=s;

printf("\nAfter Swapping a = %d, b = %d", a, b);
getch();
}