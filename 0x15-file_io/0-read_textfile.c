#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - Reading a text file and prints it
 *
 * @letters: letters of numbers to be read and input
 * @filename: name of the file to send
 *
 * Return: numbers of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_a;
	ssize_t lenw, lenr;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_a = open(filename, O_RDONLY);
	if (file_a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_a);
		return (0);
	}
	lenr = read(file_a, buffer, letters);
	close(file_a);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
