/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:09:35 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/16 16:31:55 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	my_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*my_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char			*dddd(char *tmp, char **strs, char *sep, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		tmp = my_strcat(tmp, sep);
		tmp = my_strcat(tmp, strs[i++]);
	}
	return (tmp);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	len;
	int				i;
	char			*tmp;
	char			*result;

	if (!size)
	{
		result = (char *)malloc(1);
		result[0] = 0;
		return (result);
	}
	len = 0;
	i = 0;
	while (i < size)
		len += my_strlen(strs[i++]);
	result = (char *)malloc(((size - 1) * my_strlen(sep)) + len + 1);
	if (!result)
		return (0);
	tmp = my_strcat(result, strs[0]);
	i = 1;
	tmp = dddd(tmp, strs, sep, size);
	*tmp = '\0';
	return (result);
}
