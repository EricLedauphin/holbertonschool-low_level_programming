#include "main.h"

/**
*Where n is the number of times the character \ should be printed
*The diagonal should end with a \n
*
*/
void print_diagonal(int n)
{
	int l1, l2;

	for (l1 = 0; l1 < n; l1++)
	{
		for (l2 = 0; l2 < l1; l2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
