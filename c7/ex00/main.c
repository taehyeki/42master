#include <stdio.h>

char *ft_strdup();

int main()
{
	char *a = "abcdef";

	printf("%s\n", a);
	printf("%s\n", ft_strdup(a));
	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", ft_strdup(a));
	return 0;
}
