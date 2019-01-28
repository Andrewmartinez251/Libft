/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 20:12:21 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 16:24:55 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d_temp;
	unsigned char *s_temp;

	d_temp = (unsigned char *)dst;
	s_temp = (unsigned char *)src;
	while (n--)
	{
		*d_temp = *s_temp;
		if (*s_temp == (unsigned char)c)
			return ((void *)++d_temp);
		d_temp++;
		s_temp++;
	}
	return (NULL);
}
