/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:01:15 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:14:17 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)s;
	while (n--)
	{
		res[i] = 0;
		i++;
	}
}
