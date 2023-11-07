#include "libft.h"

 void *memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest)
		return (dest);
	i = 0;
	while (i < n)
	{
		*(char *) (dest + i) = *(char *) (src + i);
		i++;
	}
	return (dest);
}
