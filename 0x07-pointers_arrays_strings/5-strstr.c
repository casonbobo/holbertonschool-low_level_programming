#include "main.h"
/**
 *_strstr - string string
 *@haystack: hey stack
 *@needle: noodle
 *Return: a stringy noodle?
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
		one++;
		two++;
		}
		if (*two == '\0')
		return (haystack);
	}
return (0);
}
