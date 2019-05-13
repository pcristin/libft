/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:32:45 by pcristin          #+#    #+#             */
/*   Updated: 2019/05/13 11:37:44 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int				i;
	unsigned int				j;
	char						*new;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
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
