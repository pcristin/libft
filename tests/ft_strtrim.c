#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_whcount(char const *s);
unsigned int	ft_strlen(char const *s);

char	*ft_strtrim(char const *s)
{
	int				i;
	int j;
	char			*new;

	j = 0;
	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) - ft_whcount(s)));
	while(s[i] != '\0')
		i++;
	while (j < (ft_strlen(s) - ft_whcount(s)))
	{
		new[j] = s[i];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
