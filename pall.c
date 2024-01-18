#include "monty.h"
/**
 *pall - function to push an element to a stack
 *@stack: top of the stack
 *@line_number: on error of line
 *Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "%d\n", line_number);
		exit(EXIT_FAILURE);

	}
	else
	{
		while (current)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}
}
