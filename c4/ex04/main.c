/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:28:53 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/11 19:41:17 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_base();


#include <unistd.h>
int main()
{
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-3, "ab");
	write(1, "\n", 1);
	ft_putnbr_base(10, "012");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "01920");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "+012456789");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "-0123456789");
	return 0;
}

