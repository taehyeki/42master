/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:52:37 by taehyeki          #+#    #+#             */
/*   Updated: 2021/02/25 23:38:40 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (n == 1 && (str[i] > 96 && str[i] < 123))
			str[i] -= 32;
		else if (n == 0 && (str[i] > 64 && str[i] < 91))
			str[i] += 32;
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65))
			n = 1;
		else if ((str[i] > 90 && str[i] < 97) || str[i] > 122)
			n = 1;
		else
			n = 0;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s",ft_strcapitalize(a));
	return (0);
}
