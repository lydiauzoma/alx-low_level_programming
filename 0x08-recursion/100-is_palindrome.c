#include "main.h"
/**
 * _strlen_recursion -> return the length of a string
 * @s:string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
*check_pal->compares each character
*@s: string
*@n1:smallest iterator
*@n2:biggest iterator
*Return: success
*/
int check_pal(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
	if (n1 == n2 || n1 == n2 + 1)
	return (1);
	return (0 + check_pal(s, n1 + 1, n2 - 1));
}
	return (0);
	}
/**
*is_palindrome - detects if a string
*@s: string.
*Return: 1 if success
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
