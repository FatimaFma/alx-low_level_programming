#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: filename to be created
 * @text_content: text to be write in file
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int *fo, i, r;

	if (filename == NULL)
	{
		return (-1);
	}
	fo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			r = write(fo, text_content, i);
			if (r == -1)
			{
				return (-1);
			}
		}
	}
	close(fo);
	return (1);
}
