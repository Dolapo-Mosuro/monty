/**
 *
 *main - a program that mimics the bash shell
 * @argv: total number of arguments passed in the shell
 * @argc : poitter to an array of arguemnts passed in the shell
 * Return: something
 */
#include "monty.h"
int main(int argc, char *argv[])
{
	int index;
	char *token;
	char line[256];
	char *strings[256];
	unsigned int line_number;
	FILE *fp;
	stack_t *stack;

	stack = NULL;
	line_number = 0;
	if (argc != 2)
	{fprintf(stderr,"USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{fprintf(stderr,"Error: Can't open file %p\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	while(fgets(line,sizeof(line),fp) != NULL)
	{
		line_number++;
		token = strtok(line," \n");
		index = 0;
		while(index <= 1)
		{
			strings[index]=token;
			index++;
			token=strtok(NULL, " \n");
		}
		/*printf("%s\n",strings[1]);*/
		argument = strings[1];
		if (strings[0] == "push")
		{
			push(&stack,line_number);
		}
	}
return(0);
}
