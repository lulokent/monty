#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @head: stack head
 * @count: line number
 * Return: void
 */
void add(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len, aux;

	len = 0;
	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux + h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h)
}
