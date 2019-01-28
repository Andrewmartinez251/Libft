/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_in_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:38:07 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/11 17:38:27 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ir : in range
** this is free real estate ;)
*/

#include "libft.h"

int		ft_ir(long a, long b, long c)
{
	return (a <= b && b <= c);
}
