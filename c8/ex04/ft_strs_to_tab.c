/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:49:42 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/18 12:56:21 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int my_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *my_strdup(char *str)
{
	unsigned int len;
	char *ret;
	int i;

	len = my_strlen(str);
	ret = (char *)malloc(len + 1);
	while (str[i])
		ret[i] = str[i++];
	ret[i] = '\0';
	return (ret)
}
	
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *s;

	i = 0;
	while (i < ac)
	{
		s[i].size = (int)my_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = 




