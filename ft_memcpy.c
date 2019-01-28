/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 18:06:00 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/05 18:11:30 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d_temp;
	char *s_temp;

	d_temp = (char *)dst;
	s_temp = (char *)src;
	while (n--)
		*d_temp++ = *s_temp++;
	return (dst);
}
