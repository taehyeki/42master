char *ft_strcmp(char *str1, char *str2)
{
	int i;
	
	i = 0;
	while (str2[i])
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = str2[i];
	return (str1);
}
