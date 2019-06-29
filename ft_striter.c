/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:45:17 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:11:50 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = 0;
	if (s != NULL & f != NULL)
	{
		while (s[i] != '\0')
		{
			i++;
			len++;
		}
		i = 0;
		while (i < len)
		{
			f(&s[i]);
			i++;
		}
	}
}
