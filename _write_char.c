#include "main.h"
/**
 * _write_char - writets the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errorno is set appropriately.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
