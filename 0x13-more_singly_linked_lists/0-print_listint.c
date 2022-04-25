#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a list_int _t list
 * @h: pointer to head node
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	int num;
	listint_t *p = h;

	while (p->next != NULL)
	{
		printf("%i", p->n)
		p = p->next;
		num++;
	}
	return (num+1);
}
