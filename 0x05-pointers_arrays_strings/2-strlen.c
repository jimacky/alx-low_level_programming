#include "main.h"
#include <stdio.h>
/**
*_strlen - Returns the lenght of a string
*@str: the string to get the length of
*Return: the length of @str.
*/
int _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
