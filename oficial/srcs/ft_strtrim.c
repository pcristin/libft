/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:32:45 by pcristin          #+#    #+#             */
/*   Updated: 2019/05/08 13:40:04 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	wh;
	int				i;
	char			*new;

	wh = 0;
	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) - ft_whcount(s)));
	if (!new || !s)
		return (NULL);
	wh = (sizeof(char) * (ft_strlen(s) - ft_whcount(s)));
	while (new)
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
	}
	return (new);
}
