#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
void more_numbers(void)
{
int row, count;

for (row = 0; row < 10; row++)
{
for (count = 0; count <= 14; count++)

{
if (number2 > 9)
{
_putchar((count / 10) + '0');
}
_putchar((count % 10) + '0');
}
_putchar(10);
}
}
