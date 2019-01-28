/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart <andrmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:20:56 by andrmart          #+#    #+#             */
/*   Updated: 2019/01/13 16:21:30 by andrmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *ret;

	if (!(ret = (t_list *)malloc(sizeof(*ret))))
		return (NULL);
	if (!(ret->content = malloc(sizeof(void) * content_size)))
	{
		free(ret);
		return (NULL);
	}
	if (!(content))
	{
		ret->content = NULL;
		content_size = 0;
	}
	else
		ft_memcpy(ret->content, content, content_size);
	ret->content_size = content_size;
	ret->next = NULL;
	return (ret);
}
