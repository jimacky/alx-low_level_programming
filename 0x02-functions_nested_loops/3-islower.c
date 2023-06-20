#include "main.h"
#include <stdio.h>
/**
*main - function that checks for lowercase character.
*@c: the character
*Return: Always 1 if character is lower case and 0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
