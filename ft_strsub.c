#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	size_t i = 0;
	size_t n_i = 0;

	if (!new)
		return (NULL);
	printf("kuku");
	return (0);
	/*while (start >= 0)
	{
		i++;
		start--;
	}
	while (len > 0)
	{
		new[n_i] = s[i];
		printf("%c | %c", s[i], new[n_i]);
		i++;
		n_i++;
		len--;
	}
	return (new);*/
}
