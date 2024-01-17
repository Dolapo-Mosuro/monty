#include "monty.h"
/**
 *push- function to push an element to a stack
 *@num: element that gets pushed
 *Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{	
	char *endptr;
	stack_t *current;
	stack_t *new_node;


	int result = strtol(argument,&endptr,10);
	if (*endptr != '\0')
	{
		fprintf(stderr,"error");
	}
	else
	{
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
		{ 	/*Case: Insert at the end of the list (like a queue)*/
    			new_node->n = result;
    			new_node->next = NULL;
    			new_node->prev = current;
    			current->next = new_node;
		/* Handle case: Insert at the beginning of the list (like a stack)*/
    		if (current->prev == NULL) 
		{
        		new_node->prev = NULL;
        		new_node->next = current;
        		current->prev = new_node;
        		*stack = new_node;
		}	
		}
	}
fprintf(stderr,"%u usage: push integer",line_number);
}
