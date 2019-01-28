#include "libft.h"

int		ft_wlen_c(const char *s, int c)
{
	int len;

	len = 0;
	while (*s == c && *s)
		s++;
	while (s[len] != c && s[len])
		len++;
	return (len);
}