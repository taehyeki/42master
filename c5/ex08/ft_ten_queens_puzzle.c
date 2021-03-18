/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:27:01 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/14 18:11:22 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			g_n;
int			g_q[9];
int			g_cnt;

void		ft_num_str(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

int			abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

void		backtrack(int x)
{
	int		i;

	g_n = 10;
	i = 0;
	while (i < x)
	{
		if (g_q[i] == g_q[x] || abs(g_q[i] - g_q[x]) == abs(i - x))
			return ;
		i++;
	}
	if (x == g_n - 1)
	{
		i = -1;
		while (i++ < g_n - 1)
			ft_num_str(g_q[i]);
		g_cnt++;
		write(1, "\n", 1);
		return ;
	}
	i = -1;
	while (i++ < g_n - 1)
	{
		g_q[x + 1] = i;
		backtrack(x + 1);
	}
}

int			ft_ten_queens_puzzle(void)
{
	int		i;

	g_n = 10;
	i = 0;
	while (i < g_n)
	{
		g_q[0] = i;
		backtrack(0);
		i++;
	}
	return (g_cnt);
}
