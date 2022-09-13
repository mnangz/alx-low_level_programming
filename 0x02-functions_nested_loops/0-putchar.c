#include "main.h"

/**
 * _putchar - prints _putchar as a message
 *
 * Return: On success 0.
 */
int main(void)
{
	
	int str[] = "_putchar";
	int count, strLength;

	strLength = sizeof(str) / sizeof(int);
	for (count = 0; count < strLength; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);	
}
