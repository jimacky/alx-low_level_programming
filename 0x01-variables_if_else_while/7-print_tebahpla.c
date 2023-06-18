#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints the lowercase alphabet in reverse
* Return: Always 0 (success)
*/
int main(void)
{
char lcr;
for (lcr = 'z'; lcr >= 'a'; --lcr)
putchar(lcr);
putchar('\n');
return (0);
}
