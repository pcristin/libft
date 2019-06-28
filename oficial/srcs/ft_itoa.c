/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 02:47:11 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/28 03:06:50 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

static int	len_nbr(int n)
{
	int res;
	
	res = 0;
	if (n < 0)
		res++;
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

static char	*int_max(void)
{
	char	*res;

	res = ft_strnew(ft_strlen("2147483647") + 1);
	ft_strcpy(res, "2147483647");
	return (res);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		i;

	if (n == -2147483648)
		return (int_min());
	if (n == 2147483647)
		return (int_max());
	res = ft_strnew(len_nbr(n) + 1);
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
		while (n > 0)
		{
			res[i] = '0' + (n % 10);
			n = n / 10;
			i--;
		}
	}
	return (res);
}