/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:42:50 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 15:09:13 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (!(s2 && s1))
		return (1);
	if (!(s2) || !(s1))
		return (0);
	while (s1[i] == s2[i] && s2[i])
		i++;
	return ((s1[i] == s2[i]) ? 1 : 0);
}
