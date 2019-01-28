/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:46:03 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 15:38:00 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (!(s))
		return (NULL);
	if (!(f))
		return ((char *)s);
	if (!(ret = ft_strdup((char *)s)))
		return (NULL);
	i = -1;
	while (s[++i])
		ret[i] = (*f)(i, s[i]);
	return (ret);
}
