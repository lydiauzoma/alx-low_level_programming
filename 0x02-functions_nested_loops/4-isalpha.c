#include "main.h"
/**
 *  _isalpha -> Check alphabetical letters
 *  @c: a character argument
 * Return: 1 and 0 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
