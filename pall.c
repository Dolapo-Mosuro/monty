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
	(void) line_number;
	if (current == NULL)
	{
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
