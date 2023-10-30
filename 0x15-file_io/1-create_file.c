#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * create_file - Creating a file
 * @text_content: data to be on the file
 * @filename: file name
 *
 * Return: 1 if it success. -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int file_a;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	file_a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_a == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(file_a, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(file_a);
	return (1);
}
