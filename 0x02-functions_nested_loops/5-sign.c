#include "main.h"
#include <stdio.h>
/**
*main - function that prints the sign of a number.
*Return: Always 1 if number is greater than zero
*0 if number is zero and -1 if number is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
