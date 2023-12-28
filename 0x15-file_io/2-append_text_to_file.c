#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	size_t len;

	/*Check for NULL filename*/
	if (filename == NULL)
		return (-1);

	/*Check if text_content is NULL or empty*/
	if (text_content == NULL || text_content[0] == '\0')
		return (1);

	/* Open the file for appending (O_WRONLY | O_APPEND)*/
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		/*File does not exist or permission issue*/
		return (-1);
	}

	len = strlen(text_content);
	w = write(fd, text_content, len);

	if (w == -1)
	{
		/*Error while writing*/
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
