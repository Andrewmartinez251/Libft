/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:25:44 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 19:42:11 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1t;
	const unsigned char *s2t;

	if (!(n))
		return (0);
	s1t = (const unsigned char *)s1;
	s2t = (const unsigned char *)s2;
	while (--n && *s1t == *s2t)
	{
		s1t++;
		s2t++;
	}
	return (*s1t - *s2t);
}
