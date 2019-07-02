/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:25:58 by pcristin          #+#    #+#             */
/*   Updated: 2019/07/01 15:34:31 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		words_counter(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (!s)
		return ((int)NULL);
	if (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i + 1] == '\0' && s[i] != c))
			res++;
		i++;
	}
	return (res);
}

static int		*start_coord(char const *s, char c)
{
	int	*starts;
	int	i;
	int	j;

	i = 0;
	j = 0;
	starts = (int *)malloc(sizeof(int *) * (words_counter(s, c)));
	if (!starts || !s)
		return (starts);
	if (s[i] != c)
	{
		starts[j] = i;
		i++;
		j++;
	}
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] != c) && s[i + 1] != '\0')
		{
			starts[j] = i + 1;
			j++;
		}
		i++;
	}
	return (starts);
}

static	char	**mem_free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_strdel(&str[i++]);
	free(str);
	str = 0;
	return (str);
}

static int		*words_len(char const *s, char c)
{
	int	*res;
	int	len;
	int	k;

	k = 0;
	len = 0;
	res = (int *)malloc(sizeof(int *) * words_counter(s, c));
	if (!res || !s)
		return (res);
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c)
			{
				s++;
				len++;
			}
			res[k] = len;
			k++;
			len = 0;
		}
		s++;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		words;
	int		*starts;
	int		*lens;

	starts = start_coord(s, c);
	if (!(lens = words_len(s, c)))
		ft_memdel((void *)starts);
	i = 0;
	words = words_counter(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (words + 1))))
		return (str);
	while (words--)
	{
		if ((str[i] = ft_strsub(s, starts[i], lens[i])) == 0)
			return (mem_free_split(str));
		i++;
	}
	str[i] = NULL;
	return (str);
}
