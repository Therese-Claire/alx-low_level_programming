#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: filename to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, 1 on failure (file can not be created
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file, result = 1, count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		result = write(file, text_content, count);
	}

	if (result == -1)
	{
		return (-1);
	}
	close(file);

	return (1);
}
