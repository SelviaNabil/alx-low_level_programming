#include 'main.h'
#include <unstd.h>

/**
 * _putchar - write char c to stdout
 * @c : the char print
 *
 * Return: on success 1
 * On error: return -1, and erro set appropnately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
