/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:41:31 by taehyeki          #+#    #+#             */
/*   Updated: 2021/02/23 11:50:31 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int t;
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		t = tab[i];
		tab[i] = tab[j];
		tab[j] = t;
		i++;
		j--;
	}
}
