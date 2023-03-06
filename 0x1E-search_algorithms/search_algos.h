#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/*Linear search prototype*/
int linear_search(int *array, size_t size, int value);

/*Binary search prototype*/
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int bin_recursive(int *array, int beg, int end, int value);

#endif
