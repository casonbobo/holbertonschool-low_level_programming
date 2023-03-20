#include "main.h"
/**
 *append_text_to_file - the name of this file
 *@filename: the name of da file
 *@text_content: the thig i wanna add
 *Return: im not sure. I cant count
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "\0";

	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
