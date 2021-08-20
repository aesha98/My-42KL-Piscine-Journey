#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}
