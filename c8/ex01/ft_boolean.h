/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehyeki <taehyeki@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:20:53 by taehyeki          #+#    #+#             */
/*   Updated: 2021/03/16 20:18:07 by taehyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	hokang
#define hokang 

#include <unistd.h>

typedef int			t_bool;

#define EVEN(nbr)	(nbr % 2) == 0
#define TRUE		1
#define FALSE		0
#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG		"I have an odd number of arguments.\n"
#define SUCCESS		0

#endif
