#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Memory where the data is stored.
 * @src: Memory where the data is copied from.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int r = 0;
    int i = n;

    for (; r < i; r++)
    {
        dest[r] = src[r];
        n--;
    }

    return (dest);
}

