#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: input number
 * Return: 0
*/

void print_triangle(int size)
{
	int trian, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (trian = 1; trian <= size; trian++)
		{
			for (space = 1; space <= size; space++)
			{
				if ((trian + space) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');

		}
	}
}
