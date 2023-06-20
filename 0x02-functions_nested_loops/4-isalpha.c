#include "main.h"
#include <stdio.h>
/**
*main - function that checks for alphabetic character.
*Return: Always 1 if character is a letter and 0 if not
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return  (1);
else
return (0);
}
