#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: what is stored
 * Return: 1 on success -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int i, f;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f >= 0)
	{
		for (i = 0; text_content != NULL && *(text_content + i) != '\0'; i++)
		{
			if (write(f, text_content + i, 1) != 1)
				return (-1);
		}
		if (close(f) == -1)
			return (-1);
		return (1);
	}
	return (-1);
}
