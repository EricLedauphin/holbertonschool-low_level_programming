#include "main.h"
/**
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}
