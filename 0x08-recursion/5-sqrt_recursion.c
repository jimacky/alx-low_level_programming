#include "main.h"
#include <stdio.h>
int _sqr(int n, int i);
/**
*-sqr_recursion - Returns the natural sqare root of a number
*@n: number to calculate the sqare root
*Return: the natural sqare root
*/
int _sqr_recursion(int n)
{
return (_sqr(n, 1));
}
/**
*-sqr - calculate natural sqare root
*@n: number to calculate the sqare root
@1: iterate number
*Return: the natural sqare root
*/
int _sqr(int n, int i)
{
int sqr = i * i;
if (sqr > n)
return (-1);
if (sqr == n)
return (i);
return (_sqr(n, i + 1));
}
