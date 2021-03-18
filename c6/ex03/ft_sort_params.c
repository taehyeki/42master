/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:23:15 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/14 13:07:21 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int			ft_strcmp(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
		str1++;
		str2++;
	}
	return (0);
}

void		ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;

	j = argc;
	while (1 < j - 1)
	{
		i = 1;
		while (i < j - 1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1])) == 1)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		j--;
	}
	i = 1;
	while (i < argc)
	{
		ft_print(argv[i]);
		i++;
	}
	return (0);
}
