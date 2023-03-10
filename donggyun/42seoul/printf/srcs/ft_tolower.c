int	ft_tolower(int c)
{
	if ((char) c >= 'A' && (char)c <= 'Z')
		return (c + 32);
	else
		return (c);
}