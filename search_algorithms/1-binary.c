#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - a search involving numbers
*
* Return - the outcome of the search
*/

int binary_search(int *array, size_t size, int value)
{
   while (l <= r) {
       int mid = l + (r - l) / 2;

       if (arr[mid] == x)
           return mid;

       if (arr[mid] < x)
           l = mid + 1;

       else
           r = mid - 1;
   }

   return -1;
}
