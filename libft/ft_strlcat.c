#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		src_len;
	size_t		i;
	size_t		j;

	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	if (size == 0)
		return (src_len);
	while (*dest && i < size)
	{
		dest++;
		i++;
	}
	if (i < size)
	{
		while (*src && j++ < size - i - 1)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	return (src_len + i);
}
