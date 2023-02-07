#include "main.h"
/**
 * *_strcpy - a pain in my butt
 * @dest: destination where?
 * @src: scratch scratch
 * Return: me to the dirt please
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
