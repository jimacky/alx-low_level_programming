#include "main.h"
#include <stdio.h>
/**
*_memcpy - entry point
*@dest: input
*@src: input
*@n: input
*Return: Always 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
