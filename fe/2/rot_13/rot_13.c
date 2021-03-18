#include <unistd.h>

void convert(char **a)
{
	if (**a >= 'a' && **a <= 'm')
		**a += 13;
	else if (**a >= 'n' && **a <= 'z')
		**a -= 13;
	else if (**a >= 'A' && **a <= 'M')
		**a += 13;
	else if (**a >= 'N' && **a <= 'Z')
		**a -= 13;
}


int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	while(*av[1])
	{
		convert(&av[1]);
		write(1, av[1], 1);
		av[1]++;
	}
	write(1, "\n", 1);
	return 0;
}
