#include "monty.h"
/**
 * main - entry point
 * @argc: arguments count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char **argv)
{

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	FILE *file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	tokenizer(file);
	fclose(file);

	return (0);
}
