/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:14:31 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 16:15:31 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*new;
	long	num;
	int		neg;
	int		len;

	num = n;
	len = ft_numlen(num);
	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	neg = 0;
	if (num < 0)
	{
		num = -num;
		neg = 1;
	}
	while (len > 0 + neg)
	{
		new[len - 1] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	if (neg == 1)
		new[0] = '-';
	return (new);
}
