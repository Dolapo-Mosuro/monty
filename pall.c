#include "monty.h"
/**
 *push- function to push an element to a stack
 *@num: element that gets pushed
 *Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	current = *stack
	if (*current == NULL)
	{
		exit();
	}else
	{
		while(current)
		{
			printf("%d",current->n);
		}
	}
}
