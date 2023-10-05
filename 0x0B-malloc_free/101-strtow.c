#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - function that splits a string into words.
 * @str : pointer to the string.
 *
 * Return: NULL if str == NULL or str == "", NULL if your function fails,
 * or a pointer to an array of string.
 */
char **strtow(char *str)
{
	int wordLength;
	int wordIndex;
	int wordcount;
	int wordStart;
	int i, j;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	wordCount = 0;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			wordCount++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	char **words = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	
	wordIndex = 0;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			wordStart = i;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
			wordLength = i - wordStart;
			words[wordIndex] = (char *)malloc((wordLength + 1) * sizeof(char));
			if (words[wordIndex] == NULL)
			{
				for (j = 0; j < wordIndex; j++)
				{
					free(words[j]);
				}
				free(words);
                return (NULL);
			}
			strncpy(words[wordIndex], &str[wordStart], wordLength);
			words[wordIndex][wordLength] = '\0';
			wordIndex++;
		}
		else
		{
			i++;
		}
	}
	words[wordIndex] = NULL;
	
	return (words);
}
