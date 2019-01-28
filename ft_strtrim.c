/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:49:03 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 16:48:26 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		len;
	int		whitehead;

	if (!(s))
		return (NULL);
	whitehead = ft_whiteh(s);
	trim = (char *)s + whitehead;
	len = ft_strlen((char *)trim) - ft_whitet(trim);
	trim = (char *)malloc(sizeof(char) * (len + 1));
	if (!(trim))
		return (NULL);
	trim[len] = '\0';
	while (--len + 1)
		trim[len] = s[len + whitehead];
	return (trim);
}
