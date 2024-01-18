#include "monty.h"
/**
 *pint- function to push an element to a stack
 *@num: element that gets pushed
 *Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	current = *stack;
	if (current == NULL)
	{
		fprintf(stderr,"%d\n",line_number);
		exit(EXIT_FAILURE);

	}else
	{
		if(current!=NULL)
		{
			printf("%d\n",current->n);
	     
		}
	}
}	
