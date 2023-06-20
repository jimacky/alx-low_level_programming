#include "main.h"
#include <stdio.h>
/**
*main - prints 10 times the alphabet, in lowercase
*Return: Always 0 (succcess)
*/
void print_alphabet_x10(void)
{
int ten;
char lca;
for (ten = 0; ten <= 9; ten++)
{
for (lca = 'a'; lca <= 'z'; lca++)
_putchar(lca);
_putchar('\n');
}
}
