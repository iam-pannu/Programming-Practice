#include <stdio.h>
#include <conio.h>

void main(){
int m, n, i, product = 1;
clrscr();

printf("Enter the number to be multiplied (M): ");
scanf("%d", &m);
printf("How many times to multiply that number (N): ");
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
product =  product * m;
}
getch();
}