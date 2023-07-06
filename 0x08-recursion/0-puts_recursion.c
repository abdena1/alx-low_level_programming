#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s:input
 * Return: Always 0(success)
*/
void _puts_recursion(hcar *s)
{
	if(*s)
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}

	else
		_putchar("\n");
}
