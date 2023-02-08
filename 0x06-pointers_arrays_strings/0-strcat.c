/**
 *_strcat - the straight cat
 *
 *Return: peepee poopoo
 */

int *_strcat(char *dest, char *src)
{
char array[100];

strcpy(array, src);
strcat(array, dest);
strcat(array, '\0');
}
