/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 04:37:43 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/28 04:37:58 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wc_c(const char *s, int c)
{
	int		word;
	int		wc;
	char	*s_temp;

	word = FALSE;
	wc = 0;
	s_temp = (char *)s;
	while (*s_temp == c)
		s_temp++;
	while (*s_temp)
	{
		if (!word && *s_temp != c)
		{
			word = TRUE;
			wc++;
		}
		else if (word && *s_temp == c)
		{
			word = FALSE;
		}
		s_temp++;
	}
	return (wc);
}
