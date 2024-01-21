#include "monty.h"

/**
 * pop - function that removes the top element of stack
 * @head: head of stack
 * @count: line number
 * Return: void
 */
void pop(stack _t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprint(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
		
}
