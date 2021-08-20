#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	position;
	int	min;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		position = i;
		min = i + 1;
		while (min < size)
		{
			if (tab[position] > tab[min])
			{
				temp = tab[min];
				tab[min] = tab[position];
				tab[position] = temp;
			}
			min++;
		}
		i++;
	}
}
