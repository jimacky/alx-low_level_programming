#include "main.h"
#include <unistd.h>
/**
*_putchar - writes the character c to the stdout
*Return: Always 1 (success)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

