/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 11:07:20 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/08 11:25:22 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *s_temp;

	s_temp = (const unsigned char *)s;
	while (n--)
	{
		if (*s_temp == (unsigned char)c)
			return ((void *)(s_temp));
		s_temp++;
	}
	return (NULL);
}
