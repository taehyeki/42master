#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i;
	int j;

	i = 0;
	while (av[1][i] == '\t' || av[1][i] == ' ')
		i++;
	while(av[1][i] != '\t' && av[1][i] != ' ' && av[1][i])
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
