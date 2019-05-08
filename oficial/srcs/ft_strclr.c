/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:17:48 by pcristin          #+#    #+#             */
/*   Updated: 2019/04/09 14:04:45 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

void	ft_strclr(char *s)
{
	unsigned int len;
	unsigned int i;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
	while (len > 0)
	{
		s[i] = '\0';
		i++;
		len--;
	}
}
