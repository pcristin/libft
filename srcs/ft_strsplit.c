/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:48:57 by pcristin          #+#    #+#             */
/*   Updated: 2019/05/13 12:03:44 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

unsigned int	word_count(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (*s != '\0')
	{
		if (*s != c)

	}
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**res;

	i = 0;
	res = (char **)malloc(sizeof(*res) * (ft_strlen(s) - delimc(s, c) + 1));
	if (!res || !s)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
	}
	return (res);
}
