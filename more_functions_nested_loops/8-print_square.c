#include "main.h"

/**
*If size is 0 or less, the function should print only a new line
*Use the character # to print the square
*/

void print_square(int size)
{
	int l1, l2;

	for (l1 = 0; l1 < size; l1++)
	{
		for (l2 = 0; l2 < size; l2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
