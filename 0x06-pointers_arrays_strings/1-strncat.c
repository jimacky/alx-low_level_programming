#include "main.h"
#include <stdio.h>
/**
*_strncat - concatenate two strings using at most
*an inputted number of bytes from src
*@src: the string to be appended to dest
*@dest: the string t be appended upon
@n: Number of bytes
*Return: apointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
