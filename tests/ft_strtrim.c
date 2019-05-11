#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_whcount(char const *s);
unsigned int	ft_strlen(char const *s);

char	*ft_strtrim(char const *s)
{
	//unsigned int	wh;
	int				i;
	char			*new;
	int				j;

	//wh = 0;
	i = 0;
	j = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) - ft_whcount(s)));
	//wh = (sizeof(char) * (ft_strlen(s) - ft_whcount(s)));
	//printf("%u", wh);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (j < (ft_strlen(s) - ft_whcount(s)))
	{
		new[j] = s[i];
		i++;
		j++;
	}
	return (new);
}
