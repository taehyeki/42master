void ft_putnbr();
#include <unistd.h>

int main()
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(15);
	write(1, "\n", 1);
	ft_putnbr(465);
	write(1, "\n", 1);
	ft_putnbr(-462);
	return 0;
}
