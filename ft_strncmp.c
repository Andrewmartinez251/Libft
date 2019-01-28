/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:47:12 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/27 16:28:48 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (!(n))
		return (0);
	while (s1[i] == s2[i] && s2[i] && n--)
		i++;
	if (!(n))
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
