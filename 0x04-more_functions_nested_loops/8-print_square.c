#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: input number
*/

void print_square(int size)
{
	int colum, row;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (colum = 1; colum <= size; colum++)
		{
			for (row = 1; row <= size; row++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
