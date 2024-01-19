#include "monty.h"
/**
 *push- function to push an element to a stack
 *@stack: beginning at the top of the stack
 *@line_number: print the error message
 *@_isdigit
*Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	stack_t *new_node;
	int result;

	if (_isdigit(argument) == 0)
	{
		fprintf(stderr, "L%u\n: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	result = atoi(argument);
	current = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr"Error: malloc failed\n");
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

/**
 *_isdigit - function to check if the argument is a number
 *@str: the initial string
 *Return: nothing
 */

int _isdigit(char *str)
{	char *ptr;
	if (str == NULL)
	{
		return(0);
	}
	ptr = str;

	if (ptr[0] == '-')
		ptr++;
	
	while (*ptr)
	{
		if (*ptr <  '0' || *ptr > '9')
			return (0);
		ptr++;
	}
	return (1);
}
