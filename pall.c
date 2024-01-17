#include "monty.h"
/**
 *push- function to push an element to a stack
 *@num: element that gets pushed
 *Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr,"%d\n",line_number);
		exit(EXIT_FAILURE);

	}else
	{
		while(current)
		{
			printf("%d\n",current->n);
			current = current->next;
		}
	}
}	
