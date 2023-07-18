#include <stdio.h>

/**
 * main - prints the name of the file of the program
 *        was compiled from, followed  by a new line.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}


