#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - finds the number of nodes in a list
 * @sl: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *sl)
{
	int i;

	for (i = 0; sl; i++)
		sl = sl->next;
	return (i);
}
