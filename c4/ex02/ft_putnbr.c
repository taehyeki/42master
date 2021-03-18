/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:18:32 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/11 18:23:57 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int tmp;

	if (nb < 0)
	{
		write(1, "-", 1);
		tmp = -nb;
	}
	else
		tmp = nb;
	if (tmp > 9)
	{
		ft_putnbr(tmp / 10);
		ft_putnbr(tmp % 10);
	}
	else
	{
		tmp += '0';
		write(1, &tmp, 1);
	}
}
