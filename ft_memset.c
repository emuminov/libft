#include "libft.h"

void *memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!str)
		return (str);
	i = 0;
	ptr = str;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
