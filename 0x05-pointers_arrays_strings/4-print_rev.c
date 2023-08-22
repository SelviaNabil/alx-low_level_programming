#include "main.h"

/**
 * print_rev : prints a string, in reverse, followed by a new line.
 * @s : string
 * Return : 0
 */

void print_rev(char *s);
void print_rev(char *s)
{
int i, y, lenght;

i = 0;

while (s[i] != '\0')
{
i++;
}

length = i;

for (y = length - 1; y >= 0; y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
