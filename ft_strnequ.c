/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:47:32 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 19:52:12 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	if (!(s1) || !(s2))
		return (0);
	while (s1[i] && s1[i] == s2[i] && s2[i] && n--)
		i++;
	if (!(n))
		return (1);
	return (s1[i] == s2[i]);
}
