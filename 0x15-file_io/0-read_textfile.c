#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file to be read and printed
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * or 0 if the file can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWritten;
	FILE *file;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	char buffer[letter + 1];

	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead < 0)
	{
		fclose(file);
		return (0);
	}

	buffer[bytesRead] = '\0';

	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	fclose(file);

	if (bytesWritten != bytesRead)
	{
		return (0);
	}

	return (bytesRead);
}


