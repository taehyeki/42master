#include <stdio.h>

int ft_ultimate_range();
int main()
{
	int *a;
	int i;
	
	i = -1;
	printf("%d\n", ft_ultimate_range(&a, 1, 5));
	while(i++<3)
		printf("%d",a[i]);
	return 0;
}
