/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:47:54 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 20:03:20 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	o;

	if (*needle == '\0')
		return ((char *)haystack);
	o = 0;
	while (haystack[o] != '\0' && o < len)
	{
		i = 0;
		while (haystack[o + i] && needle[i] &&\
				haystack[o + i] == needle[i] && o + i < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)&haystack[o]);
			i++;
		}
		o++;
	}
	return (NULL);
}
