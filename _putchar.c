#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @ch: char to print
 * Return: Output.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
