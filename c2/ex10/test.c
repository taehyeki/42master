#include <stdio.h>
#include <string.h>

int		main(void)
{
	char *dest;
	char c[] = "dog";
	char src[] = "hello";

	dest = c;
	strncpy(dest, src, 4);
	printf("%s\n", dest);
}
