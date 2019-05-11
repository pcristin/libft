/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 17:21:52 by pcristin          #+#    #+#             */
/*   Updated: 2019/05/08 13:47:28 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	while (*s1 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			return (*(unsigned char*)s1 - *(unsigned char*)s2);
		else
		{
			s1++;
			s2++;
			n--;
		}
	}
	if (n == 0)
		return (0);
	if (*s1 == '\0' && *s2 != '\0')
		return (-*s2);
	return (0);
}
