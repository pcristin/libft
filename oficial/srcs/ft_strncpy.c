/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 18:34:18 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/28 20:10:01 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (src[i] == '\0')
		{
			while (i < len)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
