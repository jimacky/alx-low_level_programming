#include "main.h"
#include <stdio.h>
/**
*main -  function that prints all natural numbers from n to 98
*@n: start of the number
* *Return: Always 0
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("%\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("%\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
