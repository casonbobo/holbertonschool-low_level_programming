#include "main.h"

/**
 *_strspn - string spoons
 *@s: ssssssss (like a swim)
 *@accept: aaaaaaa (aaaaaaaa)
 *Return: return return
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int t = 0;
	unsigned int b;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
				b++;
		}
			a++;
	}
return (t);
}
