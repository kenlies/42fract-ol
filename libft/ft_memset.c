#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)str;
	while (n > 0)
	{
		ptr[n - 1] = c;
		n--;
	}
	return (str);
}
