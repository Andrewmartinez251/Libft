/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 18:06:37 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/08 11:04:58 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d_temp;
	unsigned char	*s_temp;

	i = -1;
	d_temp = (unsigned char *)dst;
	s_temp = (unsigned char *)src;
	if (s_temp == d_temp)
		return (d_temp);
	if (d_temp > s_temp)
	{
		while (len--)
			d_temp[len] = s_temp[len];
	}
	else
	{
		while (++i < len)
			d_temp[i] = s_temp[i];
	}
	return (d_temp);
}
