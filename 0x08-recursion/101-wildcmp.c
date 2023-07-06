#include "main.h"
#include <stdio.h>
int strlen_no_wilds(char *str);
void iterate_ver(char **ver);
char *aweyo_match(char *str, char *aweyo);
int wildcmp(char *s1, char *s2);
/**
* strlen_no_wilds - Returns the length of a string,
* @str: The string to be measured.
* Return: The length.
*/
int strlen_no_wilds(char *str)
{
int len = 0, index = 0;
if (*(str + index))
{
if (*str != '*')
len++;
index++;
len += strlen_no_wilds(str + index);
}
return (len);
}
/**
* iterate_ver - Iterates through a string located at a wildcard
* @ver: The string to be iterated through.
*/
void iterate_ver(char **ver)
{
if (**ver == '*')
{
(*ver)++;
iterate_ver(ver);
}
}
/**
* aweyo_match - Checks if a string str matches the postfix
* @str: The string to be matched.
* @aweyo: The name
* Return: If str and postfix are identical - a pointer to the null byte
*/
char *aweyo_match(char *str, char *aweyo)
{
int str_len = strlen_no_wilds(str) - 1;
int aweyo_len = strlen_no_wilds(aweyo) - 1;
if (*aweyo == '*')
iterate_ver(&aweyo);
if (*(str + str_len - aweyo_len) == *aweyo && *aweyo != '\0')
{
aweyo++;
return (aweyo_match(str, aweyo));
}
return (aweyo);
}
/**
* wildcmp - Compares two strings, considering wildcard characters
* @s1: The first string to be compared
* @s2: The second string to be compared - may contain ver
* Return: If the strings can be considered identical - 1
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
iterate_ver(&s2);
s2 = aweyo_match(s1, s2);
}
if (*s2 == '\0')
return (1);
if (*s1 != *s2)
return (0);
return (wildcmp(++s1, ++s2));
}
