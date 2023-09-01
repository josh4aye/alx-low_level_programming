#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *@argc : arg count
 *@argv : arg vector
 *
 *Description: program to print mul of 2 ints
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
