#include "main.h"

/**
 * append_text_to_file - A function that appends text at the of a file.
 * @filename: The name of the file
 * @text_content: is the null terminated string
 * Return: 1 on success and also -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

