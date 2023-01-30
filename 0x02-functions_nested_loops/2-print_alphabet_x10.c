/**
*print_alphabet_x10 - What to say?
*Return:I can count to 10
*/
#include "main.h"

void print_alphabet_x10(void)
{
char a = 'a';
int i = 0;

while (i < 9)
{
while (a <= 'z')
{
_putchar(a);
a++;
i++;
}
}
_putchar('\n');
}
