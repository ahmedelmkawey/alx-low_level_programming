#include "main.h"

/**
 * create_file - function create file
 * @filename: pointer to string name
 * @text_content: pointer to string contents
 *
 * Description: creates a file
 * Return: 1 on success or -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int openfile, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(openfile, text_content, len);

	if (openfile == -1 || wr == -1)
		return (-1);

	close(openfile);

	return (1);
}
