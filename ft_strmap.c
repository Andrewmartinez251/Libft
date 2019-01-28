/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:45:32 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 15:10:39 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	if (!(s))
		return (NULL);
	if (!(f))
		return ((char *)s);
	if (!(ret = ft_strdup((char *)s)))
		return (NULL);
	i = -1;
	while (s[++i])
		ret[i] = (*f)(s[i]);
	return (ret);
}
