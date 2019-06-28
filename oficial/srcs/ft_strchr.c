/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:19:15 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/28 20:26:11 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	size_t	i;
	char	*res;

	ch = (char)c;
	i = 0;
	res = (char *)s;
	while (s[i])
	{
		if (s[i] == ch)
			return (res + i);
		i++;
	}
	return (NULL);
}
