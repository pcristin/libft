#include <string.h>
#include <stdio.h>

//char * ft_strjoin(char const *s1, char const *s2);
//unsigned int ft_strlen(char const *s);
unsigned int	ft_whcount(char const *s);
char	*ft_strtrim(char const *s);
unsigned int	ft_strlen(char const *s);

int	main(void)
{
	char const *A = "\t\n f32  4324  \t\t\t2";
	//char const *B = "foeuwfhoefpqifpiqwnfpqiwnfqwpnfpiqwnfpqwnfpiqnwfpbqwpfbqwpibfqpwibfpqbwfpqiwbfpibwqfbqwpifbqwpfbqpwpkfs;mqwfoq[wnfqwnf;kqwnf;qwnfpqw;infpqinwfqwnfpqwknf;kq";
	//ft_strjoin(A, B);
	//printf("%d\n", ft_whcount(A));
	printf("%u\n", ft_whcount(A));
	printf("%u\n", ft_strlen(A));
	ft_strtrim(A);
	return (1);
}
