#include "libft.h"

char	*ft_substr_v2(char *s, int start, int len, int p_null)
{
	char	*sub;
	int		i;

	if (len >= (int)ft_strlen(s))
		len = (int)ft_strlen(s);
	if (!s)
		return (NULL);
	i = 0;
	sub = (char *)(malloc(sizeof(char) * len + 1));
	if (!sub)
		return (NULL);
	if (start >= (int)ft_strlen(s))
	{
		sub[i] = '\0';
		return (sub);
	}
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	if (p_null)
		free(s);
	sub[i] = '\0';
	return (sub);
}
