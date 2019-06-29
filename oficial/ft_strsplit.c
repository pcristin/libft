/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:25:58 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 17:55:35 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		words_counter(char const *s, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	if (!s)
		return ((size_t)NULL);
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

static size_t		*start_coord(char const *s, char c)
{
	size_t	*starts;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	starts = (size_t *)malloc(sizeof(size_t *) * (words_counter(s, c) + 1));
	if (!starts || !s)
		return (NULL);
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

static size_t		*words_len(char const *s, char c)
{
	size_t	*res;
	size_t	len;
	size_t	k;

	k = 0;
	len = 0;
	res = (size_t *)malloc(sizeof(size_t *) * words_counter(s, c) + 1);
	if (!res || !s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c)
			{
				s++;
				len++;
			}
			res[k++] = len;
			k++;
			len = 0;
		}
		s++;
	}
	return (res);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		words;
	size_t		*starts;
	size_t		*lens;

	starts = start_coord(s, c);
	lens = words_len(s, c);
	i = 0;
	words = words_counter(s, c);
	str = (char **)malloc(sizeof(char **) * words);
	if (!str || !s)
		return (NULL);
	while (words)
	{
		str[i] = ft_strsub(s, starts[i], lens[i]);
		i++;
		words--;
	}
	return (str);
}
