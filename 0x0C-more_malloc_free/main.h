#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_ncaoncat(char *s1, char *s2, unsigned int n);
void *calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
#endif
