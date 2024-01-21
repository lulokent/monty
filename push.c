#include "monty.h"

/**
 * push - function that adds a node to the stack
 * @head: stack head
 * @count:line number
 * Return: void
 */
void push(stack_t **head, unsigned int count)
{
	int n, i, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (i = 0; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg > 57 || bus.arg[i] < 48)
				flag = 1;
			if (flag == 1)
			{
				fprint(stderr, "L%d: usage: push integer\n", count);
				fclose(bus.file);
				free(bus.content);
				free_stack(*head);
				exit(EXIT_FAILURE);
			}
		}
	}
	else
	{
		fprint(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
