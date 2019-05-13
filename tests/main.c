#include <stdio.h>
#include <unistd.h>

unsigned int ft_whcount(char const *s);
char *ft_strtrim(char const *s);

int main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  "; 
	char *s2 = "Hello \t  Please\n Trim me !";

	printf("%s", ft_strtrim(s1));
	return (0);
}
