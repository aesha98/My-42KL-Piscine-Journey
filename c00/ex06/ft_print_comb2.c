#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_digits(char a)
{
	put_char(a / 10 + '0');
	put_char(a % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{	
		b = a + 1;
		while (b <= 99)
		{
			print_digits(a);
			put_char(' ');
			print_digits(b);
			if (!(a == 98 && b == 99))
			{
				 put_char(',');
				  put_char(' ');
			}	
			b++;
		}
		a++;
	}
}
