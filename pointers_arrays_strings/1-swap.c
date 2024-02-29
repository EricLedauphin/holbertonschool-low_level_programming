#include "main.h"

/**
 * swap_int - switches value of first input with the value of the second input.
 * @a: First value to swap.
 * @b: Second value to swap.
 */

void swap_int(int *a, int *b)
{
int swap_int = 0;
swap_int = *b;
*b = *a;
*a = swap_int;
}
