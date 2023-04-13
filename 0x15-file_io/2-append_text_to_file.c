#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file to add text to
 * @text_content: text to add to file
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, w, i;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fo = open(filename, O_APPEND | O_WRONLY);
	if (fo == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		;
	}
	w = write(fo, text_content, i);
	if (w == -1)
	{
		return (-1);
	}
	close(fo);
	return (1);
}
