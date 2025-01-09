#include "main.h"

/**
 * _strcat - check the code
 * @dest: string
 * @src: string
 * Desc: concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    while(dest[i] != '\0')
    {
        i++;
    }

    while(src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    return (dest);
}