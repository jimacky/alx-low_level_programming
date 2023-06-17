#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - print alphabet in lower case followed by a new line except q and e
*Return: Always 0 (success)
*/
int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
putchar(la);
}
putchar('\n');
return (0);
}
