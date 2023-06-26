#include "main.h"
#include <stdio.h>
/**
*swap_int -  swaps the values of two integers
*@a: the first integer to be swappeed.
*@b: the second integer to be swappeed.
* *Return: Nothing
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
