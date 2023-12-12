#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - a search algorithm involving lines
*
* Return: the first index where value is located
*/

int linear_search(int *array, size_t size, int value) {
   size_t i;

   for (i = 0; i < size; i++) 
   {
       if (array[i] == value) {
           return (i);
       }
   }
   return (-1);
}
