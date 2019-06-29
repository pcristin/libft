/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 02:47:11 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:08:47 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int n)
{
	int	res;

	res = 0;
	if (n == 0)
		res = 2;
	if (n < 0)
	{
		res++;
		n = -n;
	}
	while (n)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

static char	*int_min(void)
{
	char	*res;

	res = ft_strnew(ft_strlen("-2147483648") + 1);
	ft_strcpy(res, "-2147483648");
	return (res);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		i;

	if (n == -2147483648)
		return (int_min());
	res = (n == 0) ? ft_strnew(1) : ft_strnew(len_nbr(n));
	i = len_nbr(n) - 1;
	if (res)
	{
		if (n < 0)
		{
			res[0] = '-';
			n = -n;
		}
		if (n == 0)
			res[0] = '0';
		while (n)
		{
			res[i--] = '0' + (n % 10);
			n = n / 10;
		}
	}
	return (res);
}
