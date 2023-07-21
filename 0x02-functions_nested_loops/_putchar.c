#include "main.h"
#include <unistd.h>
/**
 *  _putcher - writes the character c to stdout
 *  @C: The character to print
 *
 *  Return: on success 1,
 *  on error, -1 is retuened, and error is set appropriately.
 */
int _putcher(char c)
{
    return (write(1, &c, 1));
 }
