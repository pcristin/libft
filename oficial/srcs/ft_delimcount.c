/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delimcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 09:17:32 by pcristin          #+#    #+#             */
/*   Updated: 2019/05/13 09:21:26 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

unsigned int	delimc(char const *s, char c)
{
	unsigned int	res;

	res = 0;
	while (*s != '\0')
	{
		if (*s == c)
			res++;
		s++;
	}
	return (res);
}
