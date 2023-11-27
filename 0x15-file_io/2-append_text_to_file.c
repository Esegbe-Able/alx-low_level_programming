#include "main.h"
/**
 * append_text_to_file - This function's work is to
 * append text at the end of a file
 * @filename: Name of the file.
 * @text_content: added content.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	int new_letters;
	int rwr;

	if (!filename)
		return (-1);

	f_d = open(filename, O_WRONLY | O_APPEND);

	if (f_d == -1)
		return (-1);

	if (text_content)
	{
		for (new_letters = 0; text_content[new_letters]; new_letters++)
			;

		rwr = write(f_d, text_content, new_letters);

		if (rwr == -1)
			return (-1);
	}

	close(f_d);

	return (1);
}
