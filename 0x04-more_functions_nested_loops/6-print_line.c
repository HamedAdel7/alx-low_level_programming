#include "main"

/**
 * print_line - draws a straight line in the terminal
 * @n: number input
*/

void print_line(int n)
{
	int chline;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (chline = 1; chline <= n; chline++)
			_putchar('_');
		_putchar('\n');
	}
}
