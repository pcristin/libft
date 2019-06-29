/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:24:17 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:07:54 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long			res;
	int					k;

	res = 0;
	k = 1;
	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			k = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		if (res > 10 * res + (*str - 48) && (k == 1))
			return (-1);
		if (res > 10 * res + (*str - 48) && (k == -1))
			return (0);
		res = 10 * res + (*str - '0');
		str++;
	}
	return (k * res);
}
