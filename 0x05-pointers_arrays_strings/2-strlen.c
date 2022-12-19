#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
