#include <stdio.h>
#include <conio.h>

void main(){
int num,i;
long int fact = 1;
clrscr();
printf("Enter a number: ");
scanf("%d" , &num);
for(i = 1; i <=num; i++)
{
fact = fact * i;
}
printf("Factorial of %d = %ld", num, fact);
getch();
}