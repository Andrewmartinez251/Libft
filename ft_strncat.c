/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 12:05:34 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/11 17:47:03 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	l;
	int		i;

	i = 0;
	l = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[l] != '\0' && l < n)
	{
		s1[i] = s2[l];
		i++;
		l++;
	}
	s1[i] = '\0';
	return (s1);
}
