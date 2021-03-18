/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:36:07 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/09 18:39:24 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p_str;
	char *p_find;

	if (!*to_find)
		return (str);
	p_str = str;
	while (*str)
	{
		p_find = to_find;
		p_str = str;
		while (*p_str != '\0' && *p_find != '\0' && *p_find == *p_str)
		{
			p_str++;
			p_find++;
		}
		if (*p_find == '\0')
			return (str);
		str++;
	}
	return (0);
}
