#include "monty.h"
void execute(stack_t **stack, unsigned int line_number, char *line)
{

	instruction_t instructions[] = {
	{"push", push},
	/*{"pint", pint},
	{"swap", swap},
	{"nop", nop},*/
	{"pall", pall},
	{NULL, NULL}
	};

	int i;

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, line) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
	}
	free_stack(*stack);
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
	exit(EXIT_FAILURE);

}
