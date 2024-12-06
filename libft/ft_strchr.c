#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char)c != *s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
