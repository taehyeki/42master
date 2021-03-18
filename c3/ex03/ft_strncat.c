/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:18:32 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/09 18:37:41 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (tmp);
}
