#include "monty.h"

/**
 * my_add - adds the top two elements of the stack.
 * @head: pointer to the stack head
 * @counter: line number
 *
 * Return: void
 */
void my_add(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    h = *head;

    // Calculate the length of the stack
    while (h)
    {
        h = h->next;
        len++;
    }

    // Check if the stack has at least two elements
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        cleanup_and_exit(); // Custom cleanup function to handle errors and exit
    }

    // Perform the addition and update the stack
    h = *head;
    aux = h->n + h->next->n;
    h->next->n = aux;
    *head = h->next;
    free(h);
}

/**
 * cleanup_and_exit - Custom cleanup function to handle errors and exit
 *
 * Return: void
 */
void cleanup_and_exit(void)
{
    // Perform any necessary cleanup actions

    // Close files, free memory, etc.

    exit(EXIT_FAILURE);
}
