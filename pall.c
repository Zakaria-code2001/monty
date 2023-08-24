#include "monty.h"
/**
 * f_pall - printss thee stacsk
 * @head: stacks heads
 * @counter: not useded
 * Return: nos returns
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
