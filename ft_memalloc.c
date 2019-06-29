/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:19:01 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:08:58 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	**temp;

	i = 0;
	temp = (char **)malloc(sizeof(char *) * size);
	if (!temp)
		return (NULL);
	while (i <= size)
	{
		temp[i] = (char *)0;
		i++;
	}
	return ((void *)temp);
}
