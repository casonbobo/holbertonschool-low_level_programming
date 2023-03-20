#include "main.h"
/**
 *create_file - i wanna make a fiiiilllle
 *@filename: i dont wanna name it
 *@text_content: or give it content
 *Return: i just wanna make file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
