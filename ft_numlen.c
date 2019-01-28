/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars_for_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:15:20 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 16:15:23 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numlen(long num)
{
	int i;

	i = 1;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num >= 10)
	{
		i++;
		num /= 10;
	}
	return (i);
}
