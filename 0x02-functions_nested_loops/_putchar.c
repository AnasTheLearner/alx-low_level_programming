#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * Return: On success 1
 * On error, -1 is returned and err no is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
