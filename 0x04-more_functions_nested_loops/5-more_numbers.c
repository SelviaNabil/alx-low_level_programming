#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
int more_numbers(void)
int row, num, count;
for (row = 0; row < 10; row++)
{
for (count = 0; count <= 14; count++)

{
num = count;
if (count > 9)
{
_putchar(1 + 48);
num = count % 10;
}
else
_putchar(num + 48);
}
_putchar('\n');
}
}
