/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:07:23 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 16:25:18 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int o;

	if (needle[0] == '\0')
		return ((char *)haystack);
	o = 0;
	while (haystack[o] != '\0')
	{
		i = 0;
		if (haystack[o + i] == needle[i])
		{
			while (haystack[o + i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return ((char *)&haystack[o]);
				i++;
			}
		}
		o++;
	}
	return (NULL);
}
