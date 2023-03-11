int	toupper(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
		return (c - 32);
	else
		return (c);
}