#include <stdio.h>

char *ft_strjoin();
int main()
{
	char *a[] = {"abcde", "4864", "ad", "pqrdfu"};

	char *c = ft_strjoin(4, a, "*,*");
	printf("%s\n", c);
	return 0;
}
