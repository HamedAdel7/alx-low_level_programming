#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: input number
*/

void print_triangle(int size)
{
	int trian, space, hash;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (trian = 1; trian <= size; trian++)
		{
			for (space = (size - trian); space > 0; space--)
				_putchar(' ');
			for (hash = trian; hash > 0; hash--)
				_putshar('#');
			_putchar('\n');

		}
	}
}
