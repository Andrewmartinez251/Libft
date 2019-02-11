 #include "libft.h"

char	*ft_nthchr(char *str, int c, int n)
{
	if (!str || !c)
		return (NULL);
	if (!n)
		return (str);
	while (*str)
	{
		if (*str == c)
			if (!(--n))
				return (str);
		str++;
	}
	return (NULL);
}
