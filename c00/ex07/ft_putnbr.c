#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	min_int(void)
{
	put_char('-');
	put_char('2');
	put_char('1');
	put_char('4');
	put_char('7');
	put_char('4');
	put_char('8');
	put_char('3');
	put_char('6');
	put_char('4');
	put_char('8');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			min_int();
		}
		else
		{
			put_char('-');
			ft_putnbr(-nb);
		}
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		put_char(48 + nb % 10);
	}
}
