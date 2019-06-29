/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:44:22 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:25:43 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	temp = (t_list *)ft_memalloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	if (content)
	{
		if (!(temp->content = (void *)ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;
	}
	else
	{
		temp->content = NULL;
		temp->content_size = 0;
	}
	temp->next = NULL;
	return (temp);
}
