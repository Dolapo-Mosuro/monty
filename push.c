#include "monty.h"
/**
 *push- function to push an element to a stack
 *@num: element that gets pushed
 *Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{	
	stack_t *current;
	stack_t *new_node;
	int result;

	if(_isdigit(argument) == 0)
	{
		fprintf(stderr,"%d: usage: push integer",line_number);
	}

	result = atoi(argument);
	current = *stack;
	new_node = malloc(sizeof(stack_t));
	if(new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (current == NULL)
	{
		new_node->next = current;
		new_node->prev = current;
		new_node->n = result;
		*stack = new_node;
	}
	else 
	{
		new_node->n = result;
		new_node->prev = NULL;
		new_node->next = current;
		current->prev = new_node;
		*stack = new_node;
	}
}

int _isdigit(char *str)
{
	char *ptr = str;
	
	while(*ptr)
	{
		if (*ptr <  '0' || *ptr > '9')
			return (0);
		ptr++;
	}
	return (1);
}
