/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 01:37:51 by pcristin          #+#    #+#             */
/*   Updated: 2019/06/29 15:13:20 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		if (ft_memcmp(haystack, needle, ft_strlen(needle)) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
