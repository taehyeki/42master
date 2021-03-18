/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:23:37 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/16 17:46:59 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int index;
	int *p;

	index = 0;
	if (min >= max)
		return (0);
	p = (int *)malloc(sizeof(int) * (max - min));
	if (!p)
		return (0);
	while (min < max)
	{
		p[index] = min;
		min++;
		index++;
	}
	return (p);
}
