/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:14:35 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/14 18:12:48 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	op;

	op = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb)
		op *= nb--;
	return (op);
}
