#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * printError - Print an error message and exit.
 * @message: Error message format string
 * @filename: Name of the file
 * @exitCode: Exit code to be returned
 *
 */
void printError(const char *message, const char *filename, int exitCode)
{
	dprintf(STDERR_FILENO, message, filename);
	dprintf(STDERR_FILENO, "\n");
	exit(exitCode);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, otherwise exits with an error code
 */
int main(int argc, char *argv[])
{
	int fileFrom, fileTo;
	ssize_t bytesRead, bytesWritten;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		printError("Usage : cp file_from file_to", "", 97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
		printError("Error : Can't read from file %s", argv[1], 98);

	fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fileTo == -1)
		printError("Error : Can't write to %s", argv[2], 99);


	while ((bytesRead = read(fileFrom, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fileTo, buffer, bytesRead);
		if (bytesWritten == -1)
			printError("Error : Can't write to %s", argv[2], 99);
	}

	if (bytesRead == -1)
		printError("Error : Can't read from file %s", argv[1], 98);

	if (close(fileFrom) == -1)
		printError("Error : Can't close fd %d", argv[1], 100);

	if (close(fileTo) == -1)
		printError("Error : Can't close fd %d", argv[2], 100);

	return (0);
}

