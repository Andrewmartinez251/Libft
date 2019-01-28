/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 21:29:30 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/28 03:34:29 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char **ret;
	int i;
	int size;

	i = -1;
	if (!s || !c)
		return (NULL);
	size = ft_wc_c(s, c) + 1;
	if (!(ret = (char **)malloc(sizeof(char *) * size)))
		return (0);
	while (++i < size - 1)
	{
		while (*s == c && *s)
			s++;
		ret[i] = ft_strsub((const char *)s, 0, ft_wlen_c((const char *)s, c));
		s += ft_wlen_c(s, c);
	}
	ret[i] = NULL;
	return (ret);
}

