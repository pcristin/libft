/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 16:26:11 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 16:34:23 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	if (s3[0] == '\0')
		return (-s4[0]);
	if (s4[0] == '\0')
		return (s3[0]);
	while (s3[i] == s4[i] && s3[i] != '\0' && s4[i] != '\0')
		i++;
	return (s3[i] - s4[i]);
}
