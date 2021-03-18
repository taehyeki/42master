/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:33:53 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/09 18:41:16 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *string)
{
	unsigned int number;

	number = 0;
	while (*string)
	{
		string++;
		number++;
	}
	return (number);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	result;
	int				i;
	int				j;

	dest_len = ft_strlen(dest);
	result = ft_strlen(src);
	i = 0;
	j = dest_len;
	while ((src[i] != '\0') && i + 1 < (int)(size - dest_len))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size < dest_len)
		result += size;
	else
		result += dest_len;
	return (result);
}
