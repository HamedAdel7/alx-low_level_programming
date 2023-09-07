#include <unistd.h>

/**
 * _putchar - print character
 * @c: The character to print
 * Return: 1 Success
 *         -1 error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
