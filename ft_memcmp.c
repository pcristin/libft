/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 18:01:20 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:09:16 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s3;
	const unsigned char	*s4;

	s3 = (const unsigned char *)s1;
	s4 = (const unsigned char *)s2;
	if (n != 0)
	{
		while (n--)
		{
			if (*s3 != *s4)
				return (*s3 - *s4);
			s3++;
			s4++;
		}
	}
	return (0);
}
