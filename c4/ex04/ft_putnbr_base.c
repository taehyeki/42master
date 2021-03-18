/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:16:35 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/11 20:44:23 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int		ft_strlen(char *str)
{
	unsigned int	cnt;

	cnt = 0;
	while (*str)
	{
		str++;
		cnt++;
	}
	return (cnt);
}

int					sw(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < ft_strlen(str))
	{
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int					pm(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		str++;
	}
	return (0);
}

void				ft_nn(int nbr, char *base)
{
	unsigned int	tmp;

	if (nbr < 0)
	{
		tmp = -nbr;
		write(1, "-", 1);
	}
	else
		tmp = nbr;
	if (tmp > ft_strlen(base) - 1)
	{
		ft_nn(tmp / ft_strlen(base), base);
		ft_nn(tmp % ft_strlen(base), base);
	}
	else
		write(1, &base[tmp], 1);
}

void				ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) <= 1)
		return ;
	if (sw(base))
		return ;
	if (pm(base))
		return ;
	ft_nn(nbr, base);
}
