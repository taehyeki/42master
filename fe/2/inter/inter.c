#include <unistd.h>
#include <stdio.h>

void	my_print(char *str1, char *str2)
{
	int kookan[128];
	char a;
	int i;
	int n;

	i = 0;
	while (i < 128)
		kookan[i++] = 0;
	i = 0;
	while (str1[i])
		kookan[(int)str1[i++]] += 1;
	i = 0;

	n = 0;
	while (i < 128)
	{
		if (n == 0)
		{
			kookan[(int)str2[i]] *= 2;
			if (!str2[i])
				n = 1;
		}
		if (kookan[i] != 0 && kookan[i] % 2 == 0)
		{
			a = (char)i;
			write(1, &a, 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	else
		my_print(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
