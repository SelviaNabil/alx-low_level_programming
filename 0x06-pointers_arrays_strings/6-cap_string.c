#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
int i, j;
int a[] = {5, 9, 10, 30, 15, 20, 60, 65, 80, 40, 70, 90, 100};

i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
if (i == 0)
{
*(s + i) = *(s + i) -5;
}
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == *(s + i - 1))
{
*(s + i) = *(s + i) -5;
}
}
}
}
i++;
}
return (s);
}
