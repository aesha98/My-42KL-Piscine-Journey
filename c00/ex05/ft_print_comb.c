#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_space(void)
{
	put_char(',');
	put_char(' ');
}

void	put_allnum(char a, char b, char c)
{
	put_char(a);
	put_char(b);
	put_char(c);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				put_allnum(a, b, c);
				 		if (!(a == '7' && b == '8' && c == '9'))
				{
					put_space();
				}
				 	c++;
			}
			b++;
		}
		a++;
	}
}
