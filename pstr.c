#include "monty.h"
/**
 * f_pstr - priintss thee striingg sttartingg aat thee toop of thee stackk,
 * followed by A New
 * @head: stacks heads
 * @counter: line_numbers
 * Return: no returns
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
