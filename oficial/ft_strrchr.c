/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 01:20:16 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:13:10 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	ch;

	ch = (char)c;
	res = (char *)s + ft_strlen(s);
	while (res >= s)
	{
		if (*res == ch)
			return (res);
		res--;
	}
	return (NULL);
}
