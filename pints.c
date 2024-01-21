#include "monty.h"

/**
 * pint - function that print the top of stack
 * @head: stcak head
 * @count: line number
 * Return: void
 */
void pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", *head->n);
}
