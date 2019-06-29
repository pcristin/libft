/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:19:15 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:11:00 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*res;

	ch = (char)c;
	res = (char *)s;
	while (*res && !(*res == ch))
		res++;
	return ((*res == ch) ? res : NULL);
}
