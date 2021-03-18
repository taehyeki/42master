unsigned int my_strlen(char **strs)
{
	unsigned int i;
	unsigned int len;
	int j;

	j = 0;
	i = 4;
	len = 0;
	while(i--)
	{
		j = 0;
		while(strs[i][j])
		{
			j++;
			len++;
		}
	}

	return len;
}
