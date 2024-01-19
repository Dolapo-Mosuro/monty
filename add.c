#include "monty.h"
/**
 *swap - function to swap the first 2 functions
 *@stack: top of the stack
 *@line_number: on error of line
 *Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *current;

	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr, "%d\n can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->next == NULL)
	{
		fprintf(stderr,"L%u\n: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	sum = current->n + current->next->n ;
	current->next->n = sum;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(current);
}
