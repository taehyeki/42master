#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	while (*s2 && i < len)
		((*s2++ == s1[i]) ? ++i : 0);
	if ( i == len)
		write (1, s1, len);
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	return 0;
}
