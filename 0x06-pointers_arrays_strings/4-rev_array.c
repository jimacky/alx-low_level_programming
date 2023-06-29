#include "main.h"
#include <stdio.h>
/**
*reverse_array - Reverses the contents of array of integers
*@a: the array of integers to be reversed.
@n: the number of elements in the array
*Return: void
*/
void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
