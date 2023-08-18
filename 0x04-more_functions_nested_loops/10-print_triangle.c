#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 *
 * Return: always success 0
 */

void print_triangle(int size)
int height, base;

if (size <= 0)
{
_putchar('\n');
else
for (height = 1; base <= size; base++);
{
if((height+base) <= size)
{
_putchar(' ');
else
_putchar('#');
}
}
}
