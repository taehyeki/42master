/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:33:11 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/14 17:44:53 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	n;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (nb == 2 ? 1 : 0);
	n = nb;
	i = 3;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
