/**
*print_alphabet_x10 - What to say?
*Return:I can count to 10
*/
#include "main.h"

void print_alphabet_x10(void)
{
char a = 'a';
int i;

for (i = 0; i < 9; i++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
a = 'z';
}
_putchar('\n');
}
