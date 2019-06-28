/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:58:02 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/28 17:25:31 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		ch;
	unsigned char		*dest;
	const unsigned char	*source;

	source = (const unsigned char *)src;
	dest = (unsigned char *)dst;
	ch = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		*dest = *source;
		if (ch == *source)
			return ((void *)++dest);
		dest++;
		source++;
	}
	return (NULL);
}
