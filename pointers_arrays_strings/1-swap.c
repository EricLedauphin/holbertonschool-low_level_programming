#include "main.h"

/**
* Write a function that swaps
* the values of two integers
*/

void swap_int(int *a, int *b)
{
int swap_int = 0;
swap_int = *b;
*b = *a;
*a = swap_int;
}
