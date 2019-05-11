#include <string.h>

unsigned int	ft_strlen(char const *s)
{
	unsigned int len = 0;
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
