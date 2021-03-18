#include <unistd.h>
#include <stdio.h>

void mirror(char *str)
{
	int alpha[128];
	int i;
	int j;
	char a;
	i = 97;
	j = 122;
	while (i <= 122)
		alpha[i++] = j--;
	i = 65;
	j = 90;
	while (i <= 90)
		alpha[i++] = j--;
	while(*str)
	{	
		if (*str >= 'a' && *str <= 'z')
			a = (char)alpha[(int)*str];
		else if (*str >= 'A' && *str <= 'Z')
			a = (char)alpha[(int)*str];
		else 
		{
			write(1, str++, 1);
			continue ;
		}
		str++;
		write(1, &a, 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		mirror(av[1]);
	write(1, "\n", 1);
	return 0;
}
