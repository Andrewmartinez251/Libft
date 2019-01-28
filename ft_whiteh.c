/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitehead.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:49:44 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/11 17:53:11 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_whiteh(const char *s)
{
	int head;

	head = 0;
	while (ft_iswhite(s[head]))
		head++;
	return (head);
}
