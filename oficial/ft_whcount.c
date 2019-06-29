/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whcount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:33:50 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 16:09:05 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_whcount(char const *s)
{
	size_t			res;
	size_t			i;

	res = 0;
	i = 0;
	while (!(s[i] > 32 && s[i] < 127))
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			res++;
		i++;
	}
	i = ft_strlen(s) - 1;
	while (!(s[i] > 32 && s[i] < 127))
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			res++;
		i--;
	}
	return (res);
}
