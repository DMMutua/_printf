#include "main.h"

/**
 * _print_a_char - Prints a character to standard output stream
 * @args: list of variadic arguments to be printed as characters
 *
 * Return: The Length of the character byte printed - which is 1
 */
int _print_a_char(va_list args)
{
	_write(va_arg(args, int));
	return (1);
}

/**
 * _print_a_string - Printing a string to standard output stream
 * @args: a list of variading arguments
 *
 * Return: The length of the string
 */
int _print_a_string(va_list args)
{
	char *arg = va_arg(args, char *);
	int i = 0;

	if (arg != NULL)
	{
		while (arg[i])
		{
			_write(arg[i]);
			i++;
		}

		return (i);
	}

	_write('(');
	_write('n');
	_write('u');
	_write('l');
	_write('l');
	_write(')');
	return (6);
}

/**
 * _print_a_integer - Printing an integer to stdout stream
 * @args: A list of variadic arguments
 *
 * Return: The length of the integer(s) printed
 */
int _print_a_integer(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		_write('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	_recursion_integer(m);
	return (count);
}

/**
 * _recursion_integer - deals with printing an integer bigger
 * than 10 to standard output
 * @a: integer to put to stdout stream
 *
 * Return: Void
 */
void _recursion_integer(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
	{
		_recursion_integer(t / 10);
	}
	_write(t % 10 + '0');
}
