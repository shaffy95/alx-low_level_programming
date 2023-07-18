#include "main.h"
/**
 * _isalpha - check for alphabetical order
 * @c: 4-isalpha.c
 * Return - 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
