#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		put_char('N');
	}
	else
	{
		put_char('P');
	}
}
