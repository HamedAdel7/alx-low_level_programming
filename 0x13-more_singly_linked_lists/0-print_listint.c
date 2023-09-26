#include "lists.h"

/**
 * print_listint - print a linked lists
 * @h: pointer to first node
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
