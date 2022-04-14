#include "main.h"

/**
 * _isalpha - returns if string is a letter
 * @count: int
 *
 * Return: Always 0||1 (Success)
 */
int _isalpha(int count)
{
	return ((count >= 'A' && count <= 'Z') || (count >= 'a' && count <= 'z'));
}
