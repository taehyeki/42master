int ft_atoi();
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("   -+-+-1234ab567"));
	printf("%c", '\n');
	printf("%d",ft_atoi("-+-+1234ab567"));
	printf("%c", '\n');
	printf("%d",ft_atoi("   -+-+- 1234ab567"));
	printf("%c", '\n');
	printf("%d",ft_atoi("   -+-+-a1234ab567"));
	return 0;
}
