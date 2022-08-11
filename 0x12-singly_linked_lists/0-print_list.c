#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @sl: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *sl)
{
	size_t i;

	for (i = 0; sl; i++)
	{
		printf("[%d] %s\n", sl->len, sl->str);
		sl = sl->next;
	}
	return (i);
}
