#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
}

void	put_nbr(int test)
{
	if(test > 9){
		put_nbr(test / 10);
		put_nbr(test % 10);
	}
	else
	{
	put_char(test + '0');
	}
}

//initialize function
void  ft_ultimate_ft(int *********nbr);

int main(void)
{
	int test;
	
	test = 0;

	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;

	ptr = &test;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;

	ft_ultimate_ft(&ptr8);

	put_nbr(test);

	return (0);
}
