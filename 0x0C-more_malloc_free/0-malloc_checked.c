#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * processTerminate - Function to cause a normal process
 * termination using the xit function.
 * @value : the status value that will be returned to the OS.
 */
void processTerminate(unsigned int value)
{
	exit(value);
}

/**
 * *malloc_checked - Function that allocates memory using malloc
 * @b : function parameter
 *
 * Return: Pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;
	unsigned int exitStatus;

	exitStatus = 98;
	ptr = malloc(b);

	if (ptr == NULL)
	{
		processTerminate(exitStatus);
	}

	return (ptr);
}
