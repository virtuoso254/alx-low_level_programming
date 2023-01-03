/**
 * _memcpy - copies memory area
 * @dest: buffer copied
 * @src: item to be copied
 * @n: memory space
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
