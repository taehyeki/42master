/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:17:28 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/14 17:42:35 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return ((int)i);
	else
		return (0);
}
