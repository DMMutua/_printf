#include <unistd.h>
#include "main.h"

/**
 * _write - writes the character c into standard output
 * @c: the character to put into standard output
 *
 * Return: 1 on success, -1 on error
 */
int _write(char c)
{
	return(write(1, &c, 1));
}
