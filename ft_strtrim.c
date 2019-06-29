/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:32:45 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 16:18:36 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	full_blank_str(char const *str)
{
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			str++;
		else
			return (1);
	}
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t						i;
	size_t						j;
	char						*new;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (full_blank_str(s) == 0)
		return (new = ft_strnew(0));
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) - ft_whcount(s) + 1));
	if (!new)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (new);
	while (j < (ft_strlen(s) - ft_whcount(s)))
	{
		new[j] = s[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
