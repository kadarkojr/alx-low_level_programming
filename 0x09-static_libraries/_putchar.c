#include "main.h"
#include <unistd.h>
/**
* main - writes the character to c to stdout
* @c: The character to print
*
* Return: on success
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
