#include <unistd.h>

int main(int argc, char **argv)
{
	char a;
	char A; 	

	if (argc !=2)
	{	
		write(1, "\n", 1);
		return 0;
	}
	while (*argv[1])
	{
		a = 'a';
		A = 'A';
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
			while(*argv[1] >= a++)
				write(1, argv[1], 1);
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			while(*argv[1] >= A++)
				write(1, argv[1], 1);
		else
			write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
	return 0;
}
