#include "libft.h"
#include <stdarg.h>
//#include "printf.h"
#include <unistd.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int	ft_putnbr_v2(long long nb, int *count, const char *base, int baselen)
{
	if(nb < 0)
	{
		*count += write(1, "-", 1);
		nb *= -1;
	}
	if (nb > baselen - 1)
		ft_putnbr_v2(nb / baselen, count, base, baselen);
	*count += write(1, &base[nb % baselen], 1);
	return (*count);
}

int	ft_putstr_v2(const char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		count++;
		write(1, &str[i], 1);
		i++;
	}
	return (count);

}

void	ft_hexprint(unsigned long long nb, int *lev, char *hexbase)
{
	if (nb > 15)
		ft_hexprint(nb / 16, lev, hexbase);
	hexbase[*lev] = "0123456789abcdef"[nb % 16];
	*lev += 1;
}

int	ft_printf_memory(void *address)
{
	char hexbase[13];
	unsigned long long *addr;
	int	lev = 0;

	addr = (unsigned long long *)address;
	ft_bzero(hexbase, sizeof(hexbase));
	ft_memset(hexbase, '0', sizeof(hexbase));
	write(1, "0x", 2);
	ft_hexprint((unsigned long long)addr, &lev, hexbase);
	hexbase[lev] = '\0';
	return (ft_putstr_v2(hexbase) + 2);
}

int	ft_putchar_v2(char c)
{
	return (write(1, &c, 1));
}

int	ft_check_format(const char format,  va_list args)
{
	int count;
	const char *base16_1 = "0123456789abcdef";
	const char *base16_2 = "0123456789ABCDEF";
	const char *base10 = "0123456789ABCDEF";

	count = 0;
	if (format == 'c')
		count = ft_putchar_v2(va_arg(args, int));
	else if  (format == 's')
		count = ft_putstr_v2(va_arg(args, char *));
	else if (format == 'p')
		count = ft_printf_memory(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		count = ft_putnbr_v2((long long)va_arg(args, int), &count, base10, 10);
	else if (format == 'u')
		count = ft_putnbr_v2((long long)va_arg(args, unsigned int), &count, base10, 10);
	else if (format == 'x')
		count = ft_putnbr_v2((long long)va_arg(args, unsigned int), &count, base16_1, 16);
	else if (format == 'X')
		count = ft_putnbr_v2((long long)va_arg(args, unsigned int), &count, base16_2, 16);
	else if (format == '%')
		count = ft_putchar_v2('%');
	return (count);
}

int	ft_processing(const char *format, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_check_format(format[i], args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	count;

	count = 0;
	va_start(args, format);
	count = ft_processing(format, args);
	va_end(args);
	return (count);
}