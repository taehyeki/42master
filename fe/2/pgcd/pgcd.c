#include <stdio.h>
#include <stdlib.h>






int pgcd(int a, int b)
{
	int tmp;
	int n;

	if (b > a)
	{
		tmp = b;
		b = a;
		a = tmp;
	}
	
	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int main(int ac, char **av)
{
	int a;
	int b;

	if (ac == 3)
	{	
		a = atoi(av[1]);
		b = atoi(av[2]);
		printf("%d",pgcd(a,b));
	}
	printf("\n");
	return 0;
}
