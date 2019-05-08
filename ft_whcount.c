unsigned int	ft_whcount(char const *s) //count whitespaces, tabs and nl at the begging and end of the string
{
	unsigned int	res;
	int i;

	res = 0;
	i = 0;
	while (!(s[i] > 32 && s[i] < 127))
	{
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			res++;
		i++;
	}
	while (s[i] != '\0')
		i++;
	i--;
	while (!(s[i] > 32 && s[i] < 127))
	{
		if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			res++;
		i--;
	}
	return(res);
}
