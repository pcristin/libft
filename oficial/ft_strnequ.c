/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:35:52 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:12:50 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while (s1 && s2)
	{
		if (ft_strncmp((char *)s1, (char *)s2, n) == 0)
			return (1);
		return (0);
	}
	return (0);
}
