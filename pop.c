#include "monty.h"
/**
 *pop - function to delete the function at the top of the stack
 *@stack: top of the stack
 *@line_number: on error of line
 *Return: nothing
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "L%u:can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);

	} else
	{
		if (current != NULL)
		{
			*stack = (*stack)->next;
			free(current);
			if (*stack != NULL)
				(*stack)->prev = NULL;
		}
	}
}
