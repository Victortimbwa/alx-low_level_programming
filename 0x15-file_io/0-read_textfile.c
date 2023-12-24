#include "main.h"

/**
 * read_textfile - reads and also prints text
 * @filename: name of file
 * @letters: number of letters
 * Return: number of letter it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
