#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - This read_textfile function reads
 * a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to be read and printed
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	ssize_t lengthr, lengthw;
	char *buffer;

	if (filename == NULL)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f_d);
		return (0);
	}
	lengthr = read(f_d, buffer, letters);
	close(f_d);
	if (lengthr == -1)
	{
		free(buffer);
		return (0);
	}
	lengthw = write(STDOUT_FILENO, buffer, lengthr);
	free(buffer);
	if (lengthr != lengthw)
		return (0);
	return (lengthw);
}
