#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Starting address of memory to be filled.
 * @b: The desired value.
 * @n: Number of bytes to be changed.
 *
 * Return: A pointer to the changed array with the new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    for (; n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return (s);
}

