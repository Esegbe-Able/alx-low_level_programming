#include "main.h"
/**
 * create_file - The function create_file creates a file
 * @filename: the name of the file.
 * @text_content: content to be writen in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f_d;
	int new_letters;
	int rwr;

	if (!filename)
		return (-1);

	f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (new_letters = 0; text_content[new_letters]; new_letters++)
		;

	rwr = write(f_d, text_content, new_letters);

	if (rwr == -1)
		return (-1);

	close(f_d);

	return (1);
}
