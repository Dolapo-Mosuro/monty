#include "monty.h"

char *argument = NULL;

/**
 *
 *main - a program that mimics the bash shell
 * @argv: total number of arguments passed in the shell
 * @argc : poitter to an array of arguemnts passed in the shell
 * Return: something
 */
int main(int argc, char *argv[]) {
    int index;
    int i;
    int op_size;
    char *token;
    char line[256];
    char *strings[256];
    unsigned int line_number;
    FILE *fp;
    stack_t *stack;
    
    instruction_t op_fun[22]= {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
    };
    
    stack = NULL;
    line_number = 0;

	
    op_size = sizeof(op_fun)/sizeof(op_fun[0]);


    if (argc != 2) {
        fprintf(stderr, "USAGE: monty file");
        exit(EXIT_FAILURE);
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        line_number++;
        token = strtok(line, " \n");
        index = 0;
        while (index <= 1) {
            strings[index] = token;
            index++;
            token = strtok(NULL, " \n");
        }
	argument = strings[1];
        for(i = 0; i < op_size; i++)
		if (strcmp(strings[0], op_fun[i].opcode) == 0){
			op_fun[i].f(&stack, line_number);
			break;
		}
    }

    fclose(fp);

    return 0;
}

