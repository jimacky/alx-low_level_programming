#include "main.h"
#include <stdio.h>
/**
*_strcat - concatenate two strings
*@dest: input value
*Return: void
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;
while (dest[1] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[1] = '\0';
return (dest);
}
