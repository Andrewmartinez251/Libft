/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitetail.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:51:03 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/11 17:51:21 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_whitet(const char *s)
{
	int tail;
	int i;

	tail = 0;
	i = ft_strlen((char *)s) - 1;
	while (ft_iswhite(s[i]) && i >= 0)
	{
		i--;
		tail++;
	}
	return (tail);
}
