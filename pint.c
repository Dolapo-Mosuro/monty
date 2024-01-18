#include "monty.h"
/**
 *pint - function to prints the value at the top of the stack
 *@stack: top of the stack
 *@line_number: on error of line
 *Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "%d\n", line_number);
		exit(EXIT_FAILURE);

	} else
	{
		if (current != NULL)
		{
			printf("%d\n", current->n);
		}
	}
}
