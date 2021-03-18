#include <unistd.h>

void	print()
{
	char a = '0';

	while (a <= '9')
	{
		write(1, &a, 1);
		a += 1;
	}
}
