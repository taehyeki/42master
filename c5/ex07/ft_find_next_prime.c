/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:50:53 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/14 17:49:55 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	n;

	if (nb % 2 == 0)
		return (nb == 2 ? 1 : 0);
	else if (nb <= 1)
		return (0);
	i = 3;
	n = nb;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int					ft_find_next_prime(int nb)
{
	int				i;

	i = 1;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
