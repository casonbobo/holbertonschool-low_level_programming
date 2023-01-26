/**
*main - Time to run
*Return: Or time to turn
*/
#include <stdio.h>

int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if ( c != 9)
{
putchar('0' + c);
putchar(',');
putchar(' ');
}
else
{
putchar('0' + c);
}
}
return (0);
}
