#include <stdio.h>

int *ft_range();
int main()
{
	int *p = ft_range(1,6);

	int a;
	a = 5;
	while (a--)
	{
		printf("%d\n",*p);
		p++;
	}
	return 0;
}
