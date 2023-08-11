#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints without using printf and puts
 *
 * Return: Always 1 (Failed)
*/

int main(void)
{
	char new[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, new, 59);
	return (1);
}
