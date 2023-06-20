#include "main.h"
#include <stdio.h>
/**
*main - function that prints the last digit of a number.
*Return: Always 0
*/
int print_last_digit(int)
{
int ld = n % 10;
if (ld < 0)
ld *= -1;
_putchar(ld + '0');
return (0);
}
