/**
 * _memcpy - function that copies n bytes
 * @dest: buffer copied to
 * @src: value copied
 * @n: space in bytes of @s
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
