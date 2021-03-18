int max(int *tab, unsigned int len)
{
	int i;
	int max;

	if (len <= 0)
		return 0;
	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
#include <stdio.h>
int main()
{
	int a[] ={12,732,73,9,523,52,67,3,60,1};
	printf("max : %d",max(a,10));
	return 0;
}
	
