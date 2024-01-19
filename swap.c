#include "monty.h"
/**
 *swap - function to swap the first 2 functions
 *@stack: top of the stack
 *@line_number: on error of line
 *Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	stack_t *current;

	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->next == NULL)
	{
		fprintf(stderr,"L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
