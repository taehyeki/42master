#include <unistd.h>

void last(char *str)
{
	int index;
	char *lwd;

	index = 0;
	lwd = &str[index];
	while (str[index])
	{
		if (!(str[index] >= 33 && str[index] <= 126))
		{	
			if (str[index + 1] >= 33 && str[index + 1] <= 126)
				lwd = &str[index + 1];
		}
		index++;
	}
	index = 0;
	while(lwd[index])
	{
		if (lwd[index] >= 33 && lwd[index] <= 126)
			write(1, &lwd[index], 1);
		index++;
	}
}		

int main(int ac, char **av)
{
	if (ac == 2)
		last(av[1]);
	write(1, "\n", 1);
	return 0;
}
