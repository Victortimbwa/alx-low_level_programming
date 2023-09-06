#include "main.h"
/**
 * append_text_to_file - adds text to the end of a file
 * @filename: name of the file to create
 * @text_content: content to be added to file
 * Return: 1 if successful, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd >= 0)
	{
		for (i = 0; text_content != NULL && *(text_content + i) != '\0'; i++)
		{
			if (write(fd, text_content + i, 1) != 1)
				return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
