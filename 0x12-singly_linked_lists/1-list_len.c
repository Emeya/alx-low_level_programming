
Gejix
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x12-singly_linked_lists/1-list_len.c
@Gejix
Gejix [feat]: Added file 1-list_len.c
 1 contributor
23 lines (20 sloc)  306 Bytes
#include "lists.h"

/**
 * list_len - prints number of elements in list_t list
 *
 * @h: singly linked list
 *
 * Return: number of elements in the list
 *
 */

size_t list_len(const list_t *h)
{
size_t elements;

elements = 0;
while (h != NULL)
{
h = h->next;
elements++;
}
return (elements);
}
