#include "libft.h"

char	*ft_strrchr(const char *sss, int c)
{
	int	i;

	i = 0;
	while (sss[i])
		i++;
	while (i >= 0)
	{
		if (sss[i] == (char)c)
			return ((char *)(sss + i));
		i--;
	}
	return (0);
}
