#include "monty.h"
void tokenizer(FILE *file)
{
	stack_t *blasa = NULL;
	char *line;
	size_t size;
	int x;
	unsigned int n = 1;
	while ((x = getline(&line, &size, file)) != -1)
	{
		line = strtok(line, " \n$");
		execute(&blasa, n, line);
		n++;
	}
	free(line);
	free(blasa);
}
