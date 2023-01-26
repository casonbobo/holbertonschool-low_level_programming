/**
*main - jump
*Return: around
*/

#include <stdio.h>

int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c == 'e' && c == 'q')
{
(c++);
}
else
{
putchar(c);
(c++);
}
}
putchar('\n');
return (0);
}
